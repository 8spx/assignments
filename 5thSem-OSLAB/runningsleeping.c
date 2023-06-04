#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#define UPLIMIT 10000000
int main()
{
    int i = 1;
    //RUNNING PROCESS
    while(i<=UPLIMIT)
	{
		printf("I AM RUNNING PROCESS\t[ PROGRESS = %1.1f\% ]\r",((float)i/UPLIMIT)*100);
		i++;
	}
	//SLEEPING PROCESS
	printf("\nNOW I AM SLEEPING PROCESS [FOR 15 SEC]\n");
	sleep(15);
    return 0; 
}
