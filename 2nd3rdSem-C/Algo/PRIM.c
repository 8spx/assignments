#include<stdio.h>
#define INF 9999

int visited[50],min,mincost=0,g[50][50],n,v1,v2;


int prim(void) {
  for(int j=1;j<=n;j++)
    visited[j] = 0;
  visited[1]=1;
  printf("\n");
  for(int k=1;k<n;k++)
  {
    min=INF;
    for (int i=1; i<=n;i++)
    {
      for (int j=1; j<=n; j++)
      {
        if(g[i][j]!=INF && (visited[i]==1 && visited[j]==0))
        {
          if(g[i][j]<min)
          {
            min=g[i][j];
            v1=i;
            v2=j;
          }
        }
      }
    }
    printf("\nEdge %d(%d->%d)%d",k,v1,v2,min);
    visited[v1]=visited[v2]=1;
    mincost+=min;
  }
    return mincost;
}

int main()
{
  printf("Enter Number of Nodes:\n");
  scanf("%d",&n);
  printf("Provide Adjacency Matrix:\n");
  for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&g[i][j]);
			if(g[i][j]==0)
			g[i][j]=INF;
		}
	}
  printf("\nMinimum Cost = %d",prim());
  return 0;
}
