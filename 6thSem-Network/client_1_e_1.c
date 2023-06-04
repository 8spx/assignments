#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 8010

#define CLIENT_IP "127.0.0.1"
#define CLIENT_PORT 8101

void main()
{
	struct sockaddr_in client,server;
	int socket_descriptor, server_size = sizeof(server);
	char buffer[512], message[512];

	if((socket_descriptor = socket(AF_INET,SOCK_DGRAM,0)) < 0)
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


	do
	{	
		memset(message,0x0,sizeof(message));
		printf("ENTER SERVICE REQUEST TO BE SENT TO SERVER:-\n");
		scanf("%[^\n]%*c",buffer);	
		sendto(socket_descriptor,buffer,strlen(buffer)+1,0,(struct sockaddr*)&server,server_size);
		recvfrom(socket_descriptor,message,sizeof(message),0,(struct sockaddr*)&server,&server_size);
		printf("\nMESSAGE RECEIVED = %s\n\n",message);
	}
	while(strcmp(buffer,"CLOSE") != 0);
	close(socket_descriptor);
}