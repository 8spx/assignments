#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

int main()
{
	int semid1,semid2,key,nsem;
	key=(key_t)0x40;
	semid1=semget(key,1,IPC_CREAT|0666);
	semid2=semget(key,1,IPC_CREAT|0656);
	printf("CREATED SEMAPHORE WITH ID1 = %d ID2 = %d\n",semid1,semid2);
	if(semid2 == -1)
	{
		printf("SEMAPHORE 2 NOT CREATED\n");
		perror("semget");
	}
	system("ipcs -s");
	return 0;
}
