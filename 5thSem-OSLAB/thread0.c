#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* myfunc(void* id)
{
	printf("\nRUNNING THREAD ID = %ld\n",(long)id);
	pthread_exit(NULL);
}


int main()
{
	long n;
	printf("ENTER VALUE OF NUMBER OF THREADS: ");
	scanf("%ld",&n);
    pthread_t thread[n];
    for(long i=0;i<n;i++)
    {
        printf("CREATED THREAD ID = %ld\n",i);
        int v = pthread_create(&thread[i],NULL,myfunc,(void *)i);
	    if(v)
	    {
		    printf("\nTHREAD CREATION UNSUCCESSFUL");
		    exit(-1);
	    }
    }
	pthread_exit(NULL);
}
