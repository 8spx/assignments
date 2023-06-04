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

void main()
{
	struct sockaddr_in server,client;
	int socket_descriptor, client_size = sizeof(client), pid;
	char buffer[512];

	if((socket_descriptor = socket(AF_INET,SOCK_DGRAM,0)) < 0)
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
	
	
	while(1)
	{
		pid=fork();
		
		if(pid<0)
		{
			printf("CAN'T CREATE CHILD.\n");
			exit(0);
		}
		else if(pid==0)
		{
			do
			{
				memset(buffer,0x0,sizeof(buffer));
				recvfrom(socket_descriptor,buffer,512,0,(struct sockaddr*)&client,&client_size);
				printf("\nMESSAGE RECEIVED ---> SENDING BACK\n");
				sendto(socket_descriptor,buffer,strlen(buffer)+1,0,(struct sockaddr*)&client,sizeof(client));
			}
			while(strcmp(buffer,"CLOSE") != 0);	
		}	
		
	}
	

}