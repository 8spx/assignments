#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

int main()
{
	int semid,key,nsem=1;
	key=(key_t)0x30;
	while(1)
	{
		semid=semget(key,nsem,IPC_CREAT|0666);
		if(semid != -1)
			printf("CREATED SEMAPHORE WITH ID = %d\n",semid);
		else
		{
			printf("MAX SEMAPHORE CREATED = %d\nMAX LIMIT REACHED.\n",nsem-1);
			system("ipcs -s");
			break;
		}
		nsem++;
	}
	system("ipcrm -M key");
	return 0;
}
