#include<stdio.h>

int n;
float m,w[10],p[10],x[10]={0.0},r[10];
void knapsack_greedy(void)
{
		int i;
		float u=m;
		for(i=0;i<n;i++)
		{
			if(w[i]>u)
			break;
			x[i]=1.0;
			u-=w[i];
		}
		if(i<n)
		x[i]=u/w[i];
}
int main()
{
	int i,j;
	float t,sum=0;
	printf("ENTER NO- ");
	scanf("%d",&n);
	printf("ENTER MAX WEIGHT- ");
	scanf("%f",&m);
	printf("WEIGHT PROFIT\n");
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&w[i],&p[i]);
		r[i]=p[i]/w[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(r[j]<r[j+1])
			{
				t=r[j];r[j]=r[j+1];r[j+1]=t;
				t=w[j];w[j]=w[j+1];w[j+1]=t;
				t=p[j];p[j]=p[j+1];p[j+1]=t;
			}
		}
	}
	knapsack_greedy();
	for(i=0;i<n;i++)
	printf("%f\t",x[i]);
	for(i=0;i<n;i++)
	sum+=p[i]*x[i];
	
	printf("SOLUTION= %f",sum);
}
