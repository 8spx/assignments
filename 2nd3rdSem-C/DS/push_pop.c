#include<stdio.h>
#include<stdlib.h>
#define MX 10
void display();
void push(int);
int pop();
int a[MX],top=-1;
int main()
{
	int c,r,val;
	while(1)
	{
	printf("\nENTER CHOICE\n1.PUSH\n2.POP\n3.DISPLAY\n");
	scanf("%d",&c);
		switch(c)
		{
			case 1: printf("ENTER VALUE\n");
					scanf("%d",&val);
					push(val);
					break;
			case 2:r=pop();
					printf("POPED OUT VALUE IS %d",r);
					break;
			case 3:display();
					break;		
			default:exit(0);
		}
	}
	
}
void push(int val)
{
	if(top==MX-1)
	{
		printf("OVERFLOW\n");
		exit(0);
	}
	else
	{	
		top=top+1;
		a[top]=val;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("UNDERFLOW\n");
		exit(0);
	}
	else
	{	
		top=top-1;
		return(a[top+1]);
		
	}
}

void display()
{
	int i;
	printf("\nTHE RESULT IS \n");
	for(i=0;i<=top;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
