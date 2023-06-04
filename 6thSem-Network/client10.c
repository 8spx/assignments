#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 7000

#define CLIENT_IP "127.0.0.1"
#define CLIENT_PORT 7001

void main()
{
	struct sockaddr_in client,server;
	int socket_descriptor, window_size;
	char *buffer=malloc(512), *ack, *message_window;

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
		printf("ENTER WINDOW SIZE = ");
		scanf("%d",&window_size);
		message_window = malloc(window_size);
		getchar();
		printf("ENTER SERVICE REQUEST TO BE SENT TO SERVER:-\n");
		scanf("%[^\n]%*c",buffer);
		
		for(int i=0; i<strlen(buffer); i+=window_size)
		{
			memcpy(message_window, buffer+i, window_size);
			send(socket_descriptor,message_window,window_size,0);
			recv(socket_descriptor,ack,50,0);
			puts(ack);
		}	
		
	}
	while(strcmp(buffer,"CLOSE") != 0);
	close(socket_descriptor);
}
