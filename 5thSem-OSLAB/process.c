#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
//#include<sys/type.h>

int main()
{
    
    if(fork() > 0)
    {
        //ZOMBIE PROCESS
        printf("\nZOMBIE PROCESS");
        printf("\nINSIDE PARENT BLOCK");
        printf("\nSLEEPING STARTS...[15 SEC]");
        //system("ps -el");
        sleep(15);
        //system("ps -el");
        printf("\nSLEEPING ENDS...");
    }
    else{
        printf("\nPARENT PROCESS ENDS\n");
    }
    int pid = fork();
    
    if (pid > 0)
    {
        printf("\nPARENT PROCESS\tPROCESS ID : %d\n", getpid()); 
        printf("\nPARENT OF PARENT PROCESS\tPROCESS ID : %d\n [IF ID = 1 -> PARENT DIED]", getppid());
        //SLEEPING PROCESS
        printf("\nSLEEPING STARTS...[10 SEC]");
        //system("ps -el");
        sleep(10);
        //system("ps -el");
        printf("\nSLEEPING ENDS...");
        printf("\nI WAS SLEEPING PROCESS AND MY PID = %d",pid);
    } 
    else if (pid == 0) {
        printf("CHILD PROCESS\tPROCESS ID : %d\n", getpid()); 
        printf("PARENT OF CHILD PROCESS\tPROCESS ID : %d\n", getppid());
        //SLEEPING PROCESS
        printf("\nSLEEPING STARTS...[10 SEC]");
        //system("ps -el");
        sleep(10);
        //system("ps -el");
        printf("\nSLEEPING ENDS...");
        printf("\nI WAS SLEEPING PROCESS AND MY PID = %d",pid);
    } 
    else {
        printf("\nFork Failed.");
        exit(-1);
    }
    //RUNNING PROCESS
    printf("\nI AM RUNNING PROCESS");
    //system("ps -el");
    while(1);
    //system("ps -el");
    return 0; 
}