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

void main()
{
	struct sockaddr_in server,client;
	int socket_descriptor, new_socket_descriptor, client_size = sizeof(client);
	char buffer[512], message[512];

	if((socket_descriptor = socket(AF_INET,SOCK_STREAM,0)) < 0)
	{
		printf("CREATION OF SOCKET FILE DESCRIPTOR HAS FAILED.\n");
		exit(0);
	}

	/* Initilize to 0 */
	memset(&server,0,sizeof(server));
	
	/* Server Information with IPV4 */
	server.sin_family = AF_INET;
	server.sin_port = htons(SERVER_PORT);
	server.sin_addr.s_addr = inet_addr(SERVER_IP);

	if(bind(socket_descriptor,(struct sockaddr*)&server,sizeof(server)) < 0)
	{
		printf("BINDING SOCKET FILE DESCRIPTOR WITH SERVER PORT HAS FAILED\n");
		exit(0);
	}

	if(listen(socket_descriptor,5) < 0)
	{
		printf("LISTEN HAS FAILED\n");
		exit(0);
	}
	
	if((new_socket_descriptor = accept(socket_descriptor,(struct sockaddr*)&client,&client_size)) < 0)
	{
		printf("CAN'T ACCEPT FROM CLIENT\n");
		exit(0);
	}

	puts("WAITING FOR MESSAGES...");
	do
	{		
		memset(buffer,0x0,sizeof(buffer));
		recv(new_socket_descriptor,buffer,sizeof(buffer),0);
		printf("\nMESSAGE RECEIVED\n\n");
		puts(buffer);
		printf("\nENTER YOUR MESSGAE\n\n");
		scanf("%[^\n]%*c",message);
		send(new_socket_descriptor,message,strlen(message)+1,0);
	}
	while(strcmp(buffer,"CLOSE") != 0);
	close(new_socket_descriptor);

}