#include<stdio.h>


int result[50],graph[50][50];
int stack[50]={0};

int pop()
{
	int i,elmnt;
	for(i=0;stack[i]!=0;i++);
	elmnt=stack[i-1];
	stack[i-1]=0;
	return elmnt;
}
void push(int elmnt)
{
	int i;
	for(i=0;stack[i]!=0;i++);
	stack[i]=elmnt;
}
int instack(int num)
{
	int i;
	for(i=0;stack[i]!=0;i++)
		if(stack[i]==num)
			return 1;
		
	return 0;
}
int visited(int num,int len)
{
	int i;
	for(i=0;i<=len;i++)
	if(result[i]==num)
			return 1;
		
	return 0;
}
void dfs(int s,int n)
{
	int i,val,k=1,g;
	push(s);
	result[0]=s;
	for(i=0;i<=n;i++)
	{	
		
		if(graph[s][i]==1 && instack(i)==0)
		{
			result[k]=i;
			graph[s][i]=0;
			graph[i][s]=0;
			push(i);
			s=i;
			i=0;
			k++;
		}
	}
	
	while(stack[0]!=0)
	{
		val=pop();
		for(i=0;i<=n;i++)
		{
			if(graph[val][i]==1 && instack(i)==0 && visited(i,k)==0)
			{	
				result[k]=i;
				graph[val][i]=0;
				graph[i][val]=0;
				push(i);
				val=i;
				i=0;
				k++;	
			}
		}
			
	}
	printf("PATH\n");
	for(i=0;i<n;i++)
	{
		printf("%d",result[i]);
		if(i<n-1)
		printf(" --> ");
	}
}
int main()
{
	int i,j,e1,e2,n,s,e;
	printf("ENTER NO OF VERTICES: ");
	scanf("%d",&n);
	printf("ENTER NO OF EDGES: ");
	scanf("%d",&e);
	printf("EDGE LIST\n");
	for(i=0;i<e;i++)
	{
		scanf("%d %d",&e1,&e2);
		graph[e1][e2]=1;
		graph[e2][e1]=1;	
	}
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
		if(graph[i][j] !=1)
			graph[i][j]=0;
	printf("ENTER START VERTEX: ");
	scanf("%d",&s);		
	dfs(s,n);
	return 0;
	
}
