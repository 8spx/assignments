#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;

void insertbeg(int val){
	
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(newnode));
	if (newnode==NULL){
		printf("NO MEMEORY AVAILABLE\n");
		exit(0);
	}
	newnode->data=val;
	if (start==NULL)
		newnode->next=NULL;
	else
		newnode->next=start;
	
	start=newnode;
	
}
void insertend(int val){
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(newnode));
	if (newnode==NULL){
		printf("NO MEMORY AVAILABLE\n");
		exit(0);
	}
	newnode->data=val;
	newnode->next=NULL;
	if (start==NULL)
		start=newnode;
	else{
		temp=start;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=newnode;
	}
	
}
void insertith(int val,int pos){
	struct node *newnode,*ptr,*preptr;
	newnode=(struct node*)malloc(sizeof(newnode));
	if (newnode==NULL){
		printf("NO MEMORY AVAILABLE\n");
		exit(0);
	}
	if (start==NULL){
		printf("\nLIST DOES NOT EXIST\n");
		return;
	}
	newnode->data=val;
	ptr=start;	
	while (ptr->data!=pos)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
	
}
void deletebeg(void){
	if (start==NULL){
		printf("\nUNDERFLOW\n");
		return;
	}
	struct node*ptr=start;
	start=ptr->next;
	free(ptr);
}
void deleteend(void){
	if (start==NULL){
		printf("\nUNDERFLOW\n");
		return;
	}
	struct node *ptr,*preptr;
	ptr=start;
	while(ptr->next!=NULL){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
void deletepos(int pos){
	if (start==NULL){
		printf("\nUNDERFLOW\n");
		return;
	}
	struct node *ptr,*preptr;
	ptr=start;
	for(int i=0;i<pos-1;i++){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
}
void count(void){
	if(start==NULL){
		printf("\nUNDERFLOW\n");
		return;
	}
	struct node *ptr;
	ptr=start;
	int count=0;
	while(ptr!=NULL){
		count++;
		ptr=ptr->next;
	}
	printf("\nNO OF NODES PRESENT: %d\n",count);
	
}
void reverse (void){
		if (start==NULL){
		printf("\nLIST DOES NOT EXIST\n");
		return;
	}
	struct node *q,*r,*s;
	q=start;
	r=NULL;
	while(q!=NULL){
		s=r;
		r=q;
		q=q->next;
		r->next=s;
	}
	start=r;
	printf("\nREVERSING DONE\n");
}
void sort(void){
	struct node *ptr1,*ptr2;
	ptr1=start;
	while(ptr1->next!=NULL){
		ptr2=ptr1->next;
		while(ptr2!=NULL){
			if (ptr1->data>ptr2->data)
			{
				int temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	printf("\nSORTING DONE\n");
}
void show_ll(void){
	
	struct node* temp;
	temp=start;
	printf("LIST IS: \n");
	if(temp==NULL)
		printf("EMPTY\n");
	else{
		while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
		}
		printf("\n");
	}
}
int main(){
	int c,n,i,val,pos;
	while(1){
	printf("\n\nENTER YOUR CHOICE\n\n0.SHOW LINKED LIST\n1.INSERT AT BEGIN POSITION\n2.INSERT AT END\n3.INSERT BEFORE Ith POSITION\n4.DELETE FROM BEGIN\n5.DELETE FROM END\n6.DELETE Ith POSITION\n7.COUNT NO OF NODES\n");
	printf("8.REVERSE LINKED LIST\n9.SORT THE LINKED LIST\n\n");
	scanf("%d",&c);
	switch(c){
		case 0:
			show_ll();
			break;
		case 1:
			printf("\nHOW MANY NUMBERS: ");
			scanf("%d",&n);
			printf("ENTER INTEGER VALUE TO BE INSERTED AT BEGIN: \n\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&val);
				insertbeg(val);
			}
			printf("SELECTED OPERATION DONE. ENTER LISTED OPERATION AGAIN OTHERWISE EXIT\n\n");
			break;
		case 2:
			printf("\nHOW MANY NUMBERS: ");
			scanf("%d",&n);
			printf("ENTER INTEGER VALUE TO BE INSERTED AT END: \n\n");
			for (i=0;i<n;i++){
				scanf("%d",&val);
				insertend(val);
			}
			printf("SELECTED OPERATION DONE. ENTER LISTED OPERATION AGAIN OTHERWISE EXIT\n\n");
			break;
		case 3:
			printf("\nHOW MANY TIMES TO BE INSTERED: ");
			scanf("%d",&n);
			for (i=0;i<n;i++){
				printf("ENTER INTEGER VALUE TO BE INSERTED BEFOR Ith POSITION: \n\n");
				scanf("%d",&val);
				printf("ENTER POSITION: \n\n");
				scanf("%d",&pos);
				insertith(val,pos);
			}
			printf("SELECTED OPERATION DONE. ENTER LISTED OPERATION AGAIN OTHERWISE EXIT\n\n");
			break;
		case 4:
			printf("\nHOW MANY TIMES TO BE DELETED: ");
			scanf("%d",&n);
			for (i=0;i<n;i++){
				deletebeg();
			}
			printf("SELECTED OPERATION DONE. ENTER LISTED OPERATION AGAIN OTHERWISE EXIT\n\n");
			break;
		case 5:
			printf("\nHOW MANY TIMES TO BE DELETED: ");
			scanf("%d",&n);
			for (i=0;i<n;i++){
				deleteend();
			}
			printf("SELECTED OPERATION DONE. ENTER LISTED OPERATION AGAIN OTHERWISE EXIT\n\n");
			break;
		case 6:
			printf("\nHOW MANY TIMES TO BE DELETED: ");
			scanf("%d",&n);
			for (i=0;i<n;i++){
				printf("ENTER POSITION: \n\n");
				scanf("%d",&pos);
				deletepos(pos);
			}
			printf("SELECTED OPERATION DONE. ENTER LISTED OPERATION AGAIN OTHERWISE EXIT\n\n");
			break;
		case 7:
			count();
			break;
		case 8:
			reverse();
			break;
		case 9:
			sort();
			break;
		default:exit(0);
		}
	}
}
