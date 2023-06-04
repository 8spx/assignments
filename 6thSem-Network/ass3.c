#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
void main()
{
	char s1[512],s2[512];
	int fd1,n,fd2[2],p,file;
	fd1=open("ass3ip.txt",O_RDONLY);
	if(fd1!=-1)
		n= read(fd1,s1,sizeof(s1));
	else
		exit(1);
	pipe(fd2);
	p=fork();
	if(p==-1)
	{
		printf("Fork unsucessful...\n");
		exit(1);
	}
	else if(p>0)
	{
		printf("In parent now...\n");
		close(fd2[0]);
		write(fd2[1],s1,n);
		
	}
	else
	{
		printf("In child now...\n");
		close(fd2[1]);
		n=read(fd2[0],s2,sizeof(s2));
		s2[n]='\0';
		printf("Received data in parent=%s\n",s2);
		file=open("OUTPUT.txt",O_WRONLY | O_CREAT);
		write(file,s2,strlen(s2));
		close(file);

	}
}
