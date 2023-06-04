#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_mutex_t m1=PTHREAD_MUTEX_INITIALIZER;
int counter = 0;
void* myfunc(void* t)
{
	//pthread_mutex_lock(&m1);
	long tid = (long)t;
	printf("\nTHREAD ID=%ld",tid);
	pthread_mutex_lock(&m1);
	counter++;
	pthread_mutex_unlock(&m1);
}


int main()
{
	long n,t;
	printf("ENTER NUMBER OF THREADS: ");
	scanf("%ld",&n);
	pthread_t thread[n];
	
	for(int i=0; i<n; i++)
	{
		int v = pthread_create(&thread[i],NULL,myfunc,(void *)t);
		if(v)
		{
			printf("\nTHREAD CREATION UNSUCCESSFUL");
			exit(-1);
		}
	}

	for(int i=0;i<n;i++)
	{
		pthread_join(thread[i],NULL);
	}
	printf("\nVALUE OF COUNTER = %d\n",counter);
	pthread_exit(NULL);
}
