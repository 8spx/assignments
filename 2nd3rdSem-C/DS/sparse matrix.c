#include<stdio.h>

int main()
{
	int sparse[100][100],tuple[20][3],m,n,i,j,k=1,count=0;
	printf("ENTER NO OF ROWS: ");
	scanf("%d",&m);
	printf("ENTER NO OF COLS: ");
	scanf("%d",&n);
	printf("ENTER THE SPARSE MATRIX\n");
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&sparse[i][j]);
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
			if (sparse[i][j]!=0)
				count++;
	tuple[0][0]=m;
	tuple[0][1]=n;
	tuple[0][2]=count;			
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
				if (sparse[i][j]!=0)
				{
					tuple[k][0]=i;
					tuple[k][1]=j;
					tuple[k][2]=sparse[i][j];
					k++;
				}
	printf("TUPLE FORM\n");
	
	for (k=0;k<=count;k++)
	{
		for (i=0;i<3;i++)
				printf("%d\t ",tuple[k][i]);
			printf("\n");		
    }
}
