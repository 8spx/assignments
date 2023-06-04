#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

main()
{
	int pid=fork(),fd;
	if(pid<0)
	{
		printf("FORK FAILED\n");
		exit(1);
	}
	//Creating Named PIPE
	if(mknod("mypipe",0|0600,0)<0)
		perror("COULD NOT CREATE NAMED PIPE\n");
	if(pid==0)
	{
		int k=2;
		if((fd=open("mypipe",O_WRONLY))<0)
		{
			printf("FAILED TO OPEN NAMED PIPE\n");
			exit(2);
		}
		for(int j=0;j<10;j++)
		{
			write(fd,&k,sizeof(k));
			k=2*k+1;
		}
	}
	else
	{
		int k;
		sleep(1);
		if((fd=open("mypipe",O_RDONLY))<0)
		{
			printf("FAILED TO OPEN NAMED PIPE\n");
			exit(2);
		}
		for(int j=0;j<10;j++)
		{
			read(fd,&k,sizeof(k));
			printf("%d\n",k);
		}
	}
}
