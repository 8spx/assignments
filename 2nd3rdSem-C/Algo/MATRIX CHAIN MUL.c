#include<stdio.h>

int p[50],m[100][100],s[100][100];
void mco(int n)
{
	int i,j,k,l,q;
	for(i=1;i<=n;i++)
		m[i][i]=0;
	for(l=2;l<=n;l++)
	{	for(i=1;i<=n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=9999;
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
				if(q<m[i][j])
				{
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
		printf("\nMATRIX M:\n");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			if(i<j || i==j)
			printf("%d\t",m[i][j]);
			else
			printf("\t");
			printf("\n");
				
		}
		printf("\nMATRIX S:\n");
		for(i=1;i<=n-1;i++)
		{
			for(j=2;j<=n;j++)
			if(i<j)
			printf("%d\t",s[i][j]);
			else
			printf("\t");
			printf("\n");
		}
		printf("\nMINIMUM SCALAR MULTIPLICATION\n");
		printf("%d",m[1][n]);
		printf("\n");
}
void parens(int i,int j)
{
	if(i==j)
	printf("A%d",i);
	else
	{
		printf("(");
		parens(i,s[i][j]);
		parens(s[i][j]+1,j);
		printf(")");
	}
}

int main()
{
	int i,n,x;
	printf("ENTER NO OF DIMENSIONS:\n");
	scanf("%d",&x);
	printf("ENTER DIMENSION SEQUENCE:\n");
	for(i=0;i<x;i++)
	scanf("%d",&p[i]);
	n=x-1;
	mco(n);
	printf("PARENTHESIS ORDER:\n");
	parens(1,n);
	return 0;
}
			
