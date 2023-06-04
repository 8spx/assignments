//QUEUE INSERTION AND DELETION
#include<stdio.h>
#include<stdlib.h>
#define MX 5
int queue[MX];
int front=-1,rear=-1;
void lq_display();
void lq_insert(int );
int lq_deletetion();
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
					lq_insert(val);
					break;
			case 2:r=lq_deletetion();
					if(r!=-1)
					printf("DELETED OUT VALUE IS %d",r);
					break;
			case 3:lq_display();
					break;		
			default:exit(0);
		}
	}
}
int lq_deletetion()
{
	int x=-1;
	if (front==-1 || front>rear)
	{
		printf("UNDERFLOW");
	}
	else
	{
		x=queue[front];
		front=front+1;	
	}
	return x;
}
void lq_insert(int val)
{
	if (rear>=MX-1)
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
		rear=rear+1;
	}
	
	queue[rear]=val;
}

void lq_display()
{
	int i;
	printf("\nTHE RESULT IS \n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",queue[i]);
	}
	printf("\n");
}
