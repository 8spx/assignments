#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *f1,*f2;
	char c;
	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"w");
	while((c=fgetc(f1))!=EOF)
	{
		fputc(c,f2);
	}
	fclose(f1);
	fclose(f2);
}
