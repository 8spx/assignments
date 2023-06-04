#include<stdio.h>
#include<stdlib.h>

struct node{
	int coeff;
	int exp;
	struct node *next;
};

struct node *poly1=NULL,*poly2=NULL,*poly3=NULL;

struct node *createpoly(struct node *start){
	struct node *newnode,*ptr;
	int c,e;
	printf("ENTER COEFFICIENT: ");
	scanf("%d",&c);
	printf("ENTER EXPONENT: ");
	scanf("%d",&e);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->coeff=c;
	newnode->exp=e;
	newnode->next=NULL;
	if (start==NULL)
			start=newnode;
	else
		{
			ptr=start;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=newnode;	
		}
	return start;
}

displaypoly(struct node *start){
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
		printf("\n\nEMPTY\n\n");
		else{
			printf("\nPolynomial\n");
			printf("\n");
			while(ptr!=NULL)
			{
				printf("%d",ptr->coeff);
				if(ptr->exp!=0)
				printf("X^%d",ptr->exp);
				if(ptr->next!=NULL)
				printf("+ ");
				ptr=ptr->next;
			}
		}
}
struct node* addpoly(struct node*ptr1,struct node*ptr2){
	struct node *p1,*p2;
	p1=ptr1;
	p2=ptr2;
	int x;
	while(p1!=NULL && p2!=NULL)
	{
		if (p1->exp > p2->exp){
			poly3=addnode(poly3,p1->coeff,p1->exp);
			p1=p1->next;	
		}
		if (p1->exp < p2->exp){
			poly3=addnode(poly3,p2->coeff,p2->exp);
			p2=p2->next;
		}
		if (p1->exp == p2->exp){
			x=p1->coeff+p2->coeff;
			p1=p1->next;
			p2=p2->next;
		}
	}
}
struct node* addnode(struct node* start,int c,int e){
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->exp=e;
	newnode->coeff=c;
		if (start==NULL)
			start=newnode;
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=newnode;	
		}
	return start;
}
main(){
	int c;
	struct node *temp=NULL;
	while(1){
		printf("\n1.Create First Polynomial\n2.Create Second Polynomial\n3.Add Polynomial\n4.Display First Polynomial\n5.Display Second Polynomial\n6.Display Result\n");
		printf("ENTER CHOICE: ");
		scanf("%d",&c);
	switch(c){
		case 1:	temp=createpoly(poly1);
				poly1=temp;
				break;
		case 2:	createpoly(poly2);
				break;
		case 3: addpoly(poly1,poly2);
				break;
		case 4:	displaypoly(poly1);
				break;
		case 5:	displaypoly(poly2);
				break;
		case 6:	displaypoly(poly3);
				break;
		default:exit(0);
	}
	}
}

