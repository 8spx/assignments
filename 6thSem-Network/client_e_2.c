#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 7777

#define CLIENT_IP "127.0.0.1"
#define CLIENT_PORT 7778

void main()
{
	struct sockaddr_in client,server;
	int socket_descriptor;
	char buffer[512], message[512];

	if((socket_descriptor = socket(AF_INET,SOCK_STREAM,0)) < 0)
	{
		printf("CREATION OF SOCKET FILE DESCRIPTOR HAS FAILED.\n");
		exit(0);
	}

	/* Initilize to 0 */
	memset(&server,0,sizeof(server));
	memset(&client,0,sizeof(client));

	/* Client Information with IPV4 */
	client.sin_family = AF_INET;
	client.sin_port = htons(CLIENT_PORT);
	client.sin_addr.s_addr = inet_addr(CLIENT_IP);

	/* Server Information with IPV4 */
	server.sin_family = AF_INET;
	server.sin_port = htons(SERVER_PORT);
	server.sin_addr.s_addr = inet_addr(SERVER_IP);

	if(bind(socket_descriptor,(struct sockaddr*)&client,sizeof(client)) < 0)
	{
		printf("BINDING SOCKET FILE DESCRIPTOR WITH SERVER PORT HAS FAILED\n");
		exit(0);
	}

	if(connect(socket_descriptor,(struct sockaddr*)&server,sizeof(server)) < 0)
	{
		printf("CONNECTION HAS FAILED\n");
		exit(0);
	}

	do
	{	
		memset(message,0x0,sizeof(message));
		printf("\nENTER YOUR MESSGAE\n\n");
		scanf("%[^\n]%*c",buffer);	
		send(socket_descriptor,buffer,strlen(buffer)+1,0);
		recv(socket_descriptor,message,sizeof(message),0);
		printf("\nMESSAGE RECEIVED\n\n");
		puts(message);
	}
	while(strcmp(buffer,"CLOSE") != 0);
	close(socket_descriptor);
}