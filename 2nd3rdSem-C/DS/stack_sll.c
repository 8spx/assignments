#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; 
};
struct node *start=NULL;
void push(int num)
{
	struct node *newnode,*ptr;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(start==NULL)
		start=newnode;
	else
		{
			ptr=start;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=newnode;
		}
	
}
int pop()
{
	int p;
	struct node *preptr,*ptr;
	if(start==NULL)
	{
		printf("UNDERFLOW");
		exit(0);
	}
	ptr=start;
	
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	p=ptr->data;
	preptr->next=NULL;
	free(ptr);
	return p;
}
void display()
{
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
		{
			printf("LIST EMPTY\n");
			exit(0);
		}
	else{
		printf("ELEMENTS:\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
}
main()
{
	int c,num,p;
	
	printf("1.PUSH\n2.POP\n3.DISPLAY\n");
	while(1)
	{
		printf("ENTER CHOICE:\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
					printf("ENTER VALUE: ");
					scanf("%d",&num);
					push(num);
					break;
					
			case 2:
					p=pop();
					printf("POPED VALUE: %d\n",p);
					break;
			case 3:	
					display();
					break;	
			default:exit(0);
		}
	
	}
}
