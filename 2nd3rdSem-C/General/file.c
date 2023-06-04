#include<stdio.h>
int main()
{
	FILE *f1;
	f1=fopen("C:\\a\\test.txt.txt","r");
	if(f1!= NULL)
	{
		printf("\nFile is there");
		
	}
	else
	{
		printf("\nNo such file");
		
	
	}
	fclose(f1);
	return 0;
}
