#include<stdio.h>
int main()
{
	FILE *f1;
	char c;
	f1=fopen("C:\\a\\test.txt.txt","w");
	if(f1!= NULL)
	{
		while(1)
		{
			scanf("%c ",&c);
			fputc(c,f1);
			if(c==' ')
			{
				break;
			}
		}
		fclose(f1);
		
	}
	else
	{
		printf("\nNo such file");
		
	
	}
	
	return 0;
}
