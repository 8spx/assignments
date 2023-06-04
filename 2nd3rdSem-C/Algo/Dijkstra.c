#include<stdio.h>
#define Size 50
#define INF 9999
unsigned int Adjacency[Size][Size], Path[Size], previousDistance[Size], presentDistance[Size], visitedVertex[Size];


void initialize(void) {

  for(int x=0; x<Size; x++)
    {
      presentDistance[x]=INF;
      previousDistance[x]=0;
      visitedVertex[x]=INF;
    }

  for(int i=0;i<Size;i++)
    for(int j=0;j<Size;j++)
      Adjacency[i][j]=0;
}

int min(unsigned int array[],int startVertex,int n)
{
  int index,val=INF;
  //Copy only items which are not visited
  for (int i=0;i<n;i++)
    if(visitedVertex[i] != -1)
    visitedVertex[i]=array[i];
  //Mark start vertex as not visited and exclude from calculation
  visitedVertex[startVertex]=-1;
//Calculate that vertex which gives minimum distance
  for (int i=0;i<n;i++)
    if (visitedVertex[i]<val && visitedVertex[i] != -1)
      {
        val=visitedVertex[i];
        index=i;
      }
  //Showing intermediate steps
  printf("INTERMEDIATE STEPS:  ");
  for(int j=0;j<n;j++)
  {
	  if(visitedVertex[j]==INF)
		printf("INF\t");
	else if(visitedVertex[j]==-1)
		printf("DONE\t");
	 else
	 printf("%d\t",visitedVertex[j]);
	}
	 
  return index;
}

void dijkstra(int startVertex, int n) {
  //1. showing distance from source vertex only (not path)
  int temp=startVertex;
  //initialize the distance of vertex from itself as 0
  presentDistance[startVertex] = 0;
  //calculation
  for(int x=0;x<n;x++)
  {
    //showing start vertex
	  printf("STARTVERTEX = %d\t\t",startVertex);
    for(int j=0;j<n;j++)
    {
      if (Adjacency[startVertex][j] != 0 && Adjacency[startVertex][j]+previousDistance[startVertex]<presentDistance[j])
      {
          presentDistance[j]=Adjacency[startVertex][j]+previousDistance[startVertex];
      }
    }
  for(int j=0;j<n;j++)
  {
    if (presentDistance[j] != INF)
    previousDistance[j]=presentDistance[j];
  }
  //calculation of vertex which gives minimum distance
  startVertex=min(presentDistance,startVertex,n);
  //showing distance
  printf("\tDISTANCE:  ");
  for(int k=0;k<n;k++)
  {
	if(visitedVertex[k]==INF)
	printf("INF\t");
	else
    printf("%d\t",presentDistance[k]);
  }
  printf("\n");
  }
  //2. showing distance from source vertex only (not path)
  printf("DISTANCE:  \n");
  for(int i=0;i<n;i++)
    if(i != temp)
      printf("%d -> %d = %d\n",temp,i,presentDistance[i]);
}

int main()
{

  initialize();

  int n,startVertex;
  printf("Enter Number of Nodes:\n");
  scanf("%d",&n);
  printf("Provide Adjacency Matrix:\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      scanf("%d",&Adjacency[i][j]);
  printf("Define Start Vertex:\n");
  scanf("%d",&startVertex);
  dijkstra(startVertex,n);

  
}
