#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

int main()
{
	int semid,key,count=0;
	key=(key_t)0x30;
	printf("SEMAPHORE CREATION STARTED\n");
	while(1)
	{
		semid=semget(key,1,IPC_CREAT|0666);
		
		if(semid == -1)
		{
			printf("MAX SEMAPHORE CREATED = %d\nMAX LIMIT REACHED.\n",count);
			break;
		}
		key++;
		count++;
	}
	return 0;
}
