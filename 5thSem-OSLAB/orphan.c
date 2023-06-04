#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int pid = fork();
    if(pid > 0)
	{
		printf("INSIDE PARENT BLOCK\n");
		printf("I AM PARENT PROCESS AND MY PID IS = %d\n",getpid());
	}
	else if(pid == 0)
    {
		sleep(1);
		printf("INSIDE CHILD BLOCK\n");
		printf("MY PARENT PID = %d\n",getppid());
    }
    
    return 0; 
}
