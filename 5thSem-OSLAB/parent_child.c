#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>


int main()
{
	int pid = fork();
    
    if (pid > 0)
    {
        printf("\nPARENT PROCESS AND PROCESS ID : %d\n", getpid()); 
        printf("\nPARENT OF PARENT PROCESS AND PROCESS ID : %d [IF ID = 1 -> PARENT DIED]\n", getppid());
    } 
    else if (pid == 0) {
        printf("\nCHILD PROCESS AND PROCESS ID : %d\n", getpid()); 
        printf("\nPARENT OF CHILD PROCESS AND PROCESS ID : %d\n", getppid());
    } 
    else {
        printf("\nFork Failed.\n");
        exit(-1);
    }
    return 0; 
}
