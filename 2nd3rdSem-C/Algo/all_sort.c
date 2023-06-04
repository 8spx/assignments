#include<stdio.h>
#include<stdlib.h>

void viewarray(int *,int );
void bubblesort(int *,int );
void insertionsort(int *,int );
void selectionsort(int *,int );
void merge(int *,int ,int ,int ,int );
void mergesort(int *,int ,int );
int partion(int* ,int ,int );
void quicksort(int* ,int ,int );

int main()
{
	int arr[10],i,n,c;
	printf("ENTER SIZE OF ARRAY: \n");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	while(1)
	{
		printf("\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Merge Sort\n5.Quick Sort\n6.View Array\nPress other key to exit\n");
		printf("Enter Choice-> ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:bubblesort(arr,n);
					break;
			case 2:insertionsort(arr,n);
					break;
			case 3:selectionsort(arr,n);
					break;
			case 4:mergesort(arr,0,n-1);
					break;
			case 5:quicksort(arr,0,n-1);
					break;
			case 6:viewarray(arr,n);
					break;
			default: exit(0);
					
		}
	}	
	
	return 0;
}

void viewarray(int arr[],int n)
{
	int i;
	printf("Array :\n");		
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
void bubblesort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
}
void insertionsort(int arr[],int n)
{
	int i,j,swap,pos;
	for(i=1;i<n;i++)
	{
		if(i<=n-1)
		{
			swap=arr[i];
			pos=i-1;
		}
		while(swap<arr[pos] && pos>=0)
		{
			arr[pos+1]=arr[pos];
			pos=pos-1;
		}
		arr[pos+1]=swap;
	}
}
void selectionsort(int arr[],int n)
{
	int i,j,swap,loc,min;
	for(i=0;i<n-1;i++)
	{
		if(i<n-1)
		{
			min=arr[i];
			loc=i;
		}
		
		for(j=i+1;j<n;j++)
		if(arr[j]<arr[loc])
			loc=j;
		if(i!=loc)
		{
			swap=arr[i];
			arr[i]=arr[loc];
			arr[loc]=swap;
		}
	}
}
void merge(int arr[],int beg1,int end1,int beg2,int end2)
{
	int i=beg1,j=beg2,temp[10],k=0;
	while(i<=end1 && j<=end2)
	{
		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	while(i<=end1)
		temp[k++]=arr[i++];
	while(j<=end2)
		temp[k++]=arr[j++];
	for(i=beg1,j=0;i<=end2;i++,j++)
		arr[i]=temp[j];
}
void mergesort(int arr[],int beg,int end)
{
	int mid;
	if (beg<end)
	{
		mid=(beg+end)/2;
		mergesort(arr,beg,mid);
		mergesort(arr,mid+1,end);
		merge(arr,beg,mid,mid+1,end);
	}
}
int partion(int x[],int lb,int ub)
{
	int a,down,up,temp;
	a=x[lb];
	down=lb;
	up=ub;
	while(down<up)
	{
		while(x[down]<=a && down<ub)
			down++;
		while(x[up]>a)
			up--;
		if(down<up)
		{
			temp=x[down];
			x[down]=x[up];
			x[up]=temp;
		}
	}
	x[lb]=x[up];
	x[up]=a;
	return up;
}
void quicksort(int x[],int lb,int ub)
{
	int i;
	if(lb>=ub)
		return;
	i=partion(x,lb,ub);
	quicksort(x,lb,i-1);
	quicksort(x,i+1,ub);
}
