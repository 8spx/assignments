import java.util.*;
class Ass6c{
	static void bubblesort(int[] arr,int n)
	{
		int temp = 0;  
        for(int i=0; i<n-1; i++)
		{  
            for(int j=1; j<n-i;j++)
			{  
                if(arr[j-1] > arr[j])
				{  
                    temp = arr[j-1];  
                    arr[j-1] = arr[j];  
                    arr[j] = temp;  
                }              
            }  
        } 
	}
	static void selectionsort(int[] arr,int n)
	{
		for (int i = 0; i <n-1; i++)  
        {  
            int minindex = i;  
            for (int j = i+1; j<n; j++)
			{  
                if (arr[j] < arr[minindex])
                    minindex = j;
            }  
            int num = arr[minindex];   
            arr[minindex] = arr[i];  
            arr[i] = num;  
        }
	}
	static void insertionsort(int[] arr,int n)
	{
		for (int j = 1; j<n; j++) 
		{  
            int key = arr[j];  
            int i = j-1;  
            while((i > -1) && (arr[i] > key))
			{  
                arr[i+1] = arr[i];  
                i--;  
            }  
            arr[i+1] = key;  
        }  
	}
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Sorting Algorithm\n\n");
		System.out.print("Enter Size of Array: ");
		int n=scan.nextInt();
		int[] ar= new int[n];
		for(int i=0;i<n;i++)
		{
			System.out.print("Enter Element "+(i+1)+" :");
			ar[i]=scan.nextInt();
		}
		System.out.println("Options\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\nEnter Choice: ");
		int ch=scan.nextInt();
		switch(ch)
		{
			case 1: bubblesort(ar,n);
					break;
			case 2: selectionsort(ar,n);
					break;
			case 3: insertionsort(ar,n);
					break;
		}
		scan.close();
		System.out.println("The Sorted Array");
		for(int i=0;i<n;i++)
			System.out.printf("%d\t",ar[i]);
		System.out.println();
	}
}