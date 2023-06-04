#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* myfunc(void* n)
{
	long temp = (long)n;
	long sum = (temp*(temp+1))/2;
	printf("\nTHE SUM VALUE OF %ld NATURAL NUMBERS = %ld\n",temp,sum);
	pthread_exit(NULL);
}


int main()
{
	pthread_t thread;
	long n;
	printf("ENTER VALUE OF N: ");
	scanf("%ld",&n);
	int v = pthread_create(&thread,NULL,myfunc,(void *)n);
	if(v)
	{
		printf("\nTHREAD CREATION UNSUCCESSFUL");
		exit(-1);
	}
	pthread_exit(NULL);
}
