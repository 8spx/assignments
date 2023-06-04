#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

int main()
{
	int semid,key,nsem;
	key=(key_t)0x30;
	semid=semget(key,1,IPC_CREAT|0666);
	printf("CREATED SEMAPHORE WITH ID = %d\n",semid);
	return 0;
}
