#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int pid = fork(),niceval;
    if(pid > 0)
	{
        niceval = nice(-4);
		printf("INSIDE PARENT BLOCK\n");
        printf("PARENT HIGH PRIORITY = %d\n",niceval);
		printf("I AM PARENT PROCESS AND MY PID IS = %d\n",getpid());
        //exit(0);
	}
	else if(pid == 0)
    {
        niceval = nice(5);
		printf("INSIDE CHILD BLOCK\n");
        printf("CHILD LOW PRIORITY = %d\n",niceval);
		printf("MY PARENT PID = %d\n",getppid());
    }
    
    return 0; 
}
