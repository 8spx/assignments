#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; 
};
struct node *start=NULL;
void insert(int num)
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
int del()
{
	int p;
	struct node *ptr;
	if(start==NULL)
	{
		printf("UNDERFLOW");
		exit(0);
	}
	ptr=start;
	start=ptr->next;
	p=ptr->data;
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
	
	printf("1.INSERT\n2.DELETE\n3.DISPLAY\n");
	while(1)
	{
		printf("ENTER CHOICE:\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
					printf("ENTER VALUE: ");
					scanf("%d",&num);
					insert(num);
					break;
					
			case 2:
					p=del();
					printf("DELETED VALUE: %d\n",p);
					break;
			case 3:	
					display();
					break;	
			default:exit(0);
		}
	
	}
}
