#include<stdio.h>

int ack(int,int);
int main()
{
	int a,b,x;
	printf("Enter Number a,b-->");
	scanf("%d,%d",&a,&b);
	x=ack(a,b);
	printf("The Ackerman No is--> %d",x);
	
}
int ack(int m,int n)
{
	if(m==0)
	{
		return (n+1);
	}
	if(m>0 && n==0)
	{
		return ack(m-1,1);
	}
	if(m>0 && n>0)
	{
		return ack(m-1,ack(m,n-1));
	}
	
	return ack(m,n);
}
