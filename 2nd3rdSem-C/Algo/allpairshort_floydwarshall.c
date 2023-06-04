#include<stdio.h>

int graph[100][100],d[100][100];

void floydwarshall(int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(d[i][k]+d[k][j]<d[i][j])
					d[i][j]=d[i][k]+d[k][j];
}

int main()
{
	int i,j,n;
	printf("ENTER NUMBER OF VERTICES: ");
	scanf("%d",&n);
	printf("ENTER ADJACENCY MATRIX\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{
				scanf("%d",&graph[i][j]);
				d[i][j]=graph[i][j];
			}
	
	floydwarshall(n);		
	
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
			printf("%d\t",d[i][j]);
		printf("\n");
	}
}
