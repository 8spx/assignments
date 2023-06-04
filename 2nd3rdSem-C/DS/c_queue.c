//CIRCULAR QUEUE INSERTION AND DELETION
#include<stdio.h>
#include<stdlib.h>
#define MX 5
int queue[MX];
int front=-1,rear=-1;
void cq_display();
void cq_insert(int );
int cq_deletetion();
int main()
{
	int c,r,val;
	while(1)
	{
	printf("\nENTER CHOICE\n1.INSERT\n2.DELETE\n3.DISPLAY\n");
	scanf("%d",&c);
		switch(c)
		{
			case 1: printf("ENTER VALUE\n");
					scanf("%d",&val);
					cq_insert(val);
					break;
			case 2:r=cq_deletetion();
					if(r!=-1)
					printf("DELETED OUT VALUE IS %d",r);
					break;
			case 3:cq_display();
					break;		
			default:exit(0);
		}
	}
}
int cq_deletetion()
{
	int x=-1;
	if (front==-1)
	{
		printf("UNDERFLOW");
	}
	else
	{
		x=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=(front+1)%MX;
		}	
	}
	return x;
}
void cq_insert(int val)
{
	if ((front==0 && rear==MX-1) || (front==rear+1))
	{
		printf("OVERFLOW");	
		return;
	}
	
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=(rear+1)%MX;
	}
	
	queue[rear]=val;
}

void cq_display()
{
	int i;
	printf("\nTHE RESULT IS \n");
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
			printf("\n");
	}
	else
	{
		for(i=front;i<MX;i++)
		{
			printf("%d\t",queue[i]);
		}
		for(i=0;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
		
		printf("\n");
	}
	
}
