#include<stdio.h>
#include<unistd.h>

int main()
{
	int p[2];
	int ret;
	char wm[2][20]={"HI","HELLO"};
	char rm[20];
	ret = pipe(p);

	if (ret == -1)
	{
		printf("\nUnable to Create Pipe.\n");
		return 1;
	}

	printf("Writing to pipe - Message 1 is %s\n",wm[0]);
	write(p[1],wm[0],sizeof(wm[0]));
	read(p[0],rm,sizeof(rm));
	printf("Reading from pipe - Message 1 is %s\n",rm);
	
	
	printf("Writing to pipe - Message 2 is %s\n",wm[1]);
	write(p[1],wm[1],sizeof(wm[0]));
	read(p[0],rm,sizeof(rm));
	printf("Reading from pipe - Message 2 is %s\n",rm);
	return 0;
	
}
