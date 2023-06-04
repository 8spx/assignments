#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int pid = fork();
    if(pid>0)
    {
		printf("IN PARENT BLOCK AND PID = %d\n",getpid());
        printf("ZOMBIE PROCESS STARTS FOR 10 SEC\n");
        sleep(10);
    }
	else if(pid == 0)
	{
		printf("I AM CHILD AND MY EXECUTION IS COMPLETED PID = %d\n",getpid());
	}
}
