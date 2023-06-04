#include<stdio.h>
#include<unistd.h>

int main()
{
	int p1[2],p2[2];
	int ret1,ret2, pid;
	char wm1[20]="HI";
	char wm2[20]="HELLO";
	char rm[20];
	ret1 = pipe(p1);
	ret2 = pipe(p2);
	if (ret1 == -1 || ret2 == -1)
	{
		printf("\nUnable to Create Pipe.\n");
		return 1;
	}
	
	pid=fork();
	if(pid==0)
	{
		close(p1[0]);
		close(p2[1]);
		printf("Child Writing to pipe - Message 1 is %s\n",wm1);
		write(p1[1],wm1,sizeof(wm1));
		read(p2[0],rm,sizeof(rm));
		printf("Child Reading from pipe - Message 2 is %s\n",rm);	
	}
	else
	{
		close(p1[1]);
		close(p2[0]);
		read(p1[0],rm,sizeof(rm));
		printf("Parent Reading from pipe - Message 1 is %s\n",rm);
		printf("Parent Writing to pipe - Message 2 is %s\n",wm2);
		write(p2[1],wm2,sizeof(wm2));	
		
	}
	
	return 0;
	
}
