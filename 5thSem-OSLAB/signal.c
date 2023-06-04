#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void inthandler(int sig_no);
void quithandler(int sig_no);
void huphandler(int sig_no);

main()
{
	int pid=fork();
	if(pid<0)
	{
		perror("CHILD PROCESS NOT CREATED.\n");
		exit(1);
	}
	else if(pid == 0)
	{
		signal(SIGINT,inthandler);
		signal(SIGQUIT,quithandler);
		signal(SIGHUP,huphandler);
		while(1);
	}
	else
	{
		printf("PID = %d\n",pid);
		printf("SENDING SIGINT SIGNAL\n");
		kill(pid,SIGINT);
		sleep(5);
		printf("SENDING SIGQUIT SIGNAL\n");
		kill(pid,SIGQUIT);
		sleep(5);
		printf("SENDING SIGHUP SIGNAL\n");
		kill(pid,SIGHUP);
		sleep(5);
		printf("SENDING SIGSTOP SIGNAL\n");
		kill(pid,SIGSTOP);
		sleep(5);
	}
}

void inthandler(int sig_no)
{
	signal(SIGINT,inthandler);
	printf("\nINTERRUPT SIGNAL HANDLED BY CHILD");
}

void quithandler(int sig_no)
{
	signal(SIGQUIT,quithandler);
	printf("\nQUIT SIGNAL HANDLED BY CHILD");
}

void huphandler(int sig_no)
{
	signal(SIGHUP,huphandler);
	printf("\nHANG UP SIGNAL HANDLED BY CHILD");
}
