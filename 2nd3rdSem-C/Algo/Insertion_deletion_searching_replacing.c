#include<stdio.h>
#include<stdlib.h>
void insertion(int* ,int ,int ,int* );
void deletion(int* ,int ,int* );
void replace(int*,int ,int );
void search(int*,int );
void display(int* ,int* ); 

int main()
{
    int a[10];
    int i,n,c,pos,num,no,itr;
    printf("ENTER SIZE OF ARRAY--> ");
    scanf("%d",&n);

    printf("ENTER ELEMENTS\n");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    while(1)
    {
        printf("\n1.INSERTION\n2.DELETION\n3.REPLACE\n4.SEARCH\n5.DISPLAY\n");
        scanf("%d",&c);

        switch(c)
        {
            case 1:printf("ENTER POSITION NUMBER\n");
                    scanf("%d",&pos);
                    printf("ENTER ELEMENT\n");
                    scanf("%d",&num);
                    insertion(a,pos,num,&n);
                    break;

            case 2: printf("ENTER POSITION NUMBER\n");
                    scanf("%d",&pos);
                    deletion(a,pos,&n);
                    break;

            case 3: printf("ENTER POSITION NUMBER\n");
                    scanf("%d",&pos);
                    printf("ENTER ELEMENT\n");
                    scanf("%d",&num);
                    replace(a,pos,num);
                    break;

            case 4:printf("ENTER POSITION NUMBER\n");
                    scanf("%d",&pos);
                    search(a,pos);
                    break; 

            case 5: display(a,&n);
                    break;        

            default: exit(0);                    
        }
    }
}

void insertion(int *arr,int pos,int num,int *n)
{
    int i;
    pos=pos-1;
    for(i=*n-1;i>=pos;i--)
    arr[i+1]=arr[i];
    *n=*n+1;
    arr[pos]=num;
}

void deletion(int *arr,int pos,int *n)
{
    int i;
    pos=pos-1;
    for(i=pos;i<*n;i++)
    arr[i]=arr[i+1];
    *n=*n-1;
}

void replace(int *arr,int pos,int num)
{
    int i;
    pos=pos-1;
    arr[pos]=num;
}

void search(int *arr,int pos)
{
    pos=pos-1;
    printf("\nTHE %d NO ELEMENT IS %d\n",pos+1,arr[pos]);
}

void display(int *arr,int *n) 
{
    printf("\nELEMENTS IN ARRAY\n");
    int i;
    for(i=0;i<*n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
