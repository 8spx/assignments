import java.util.*;
class Ass6d{
	int linearsearch( int n, int element)
	{
		for(int i=0;i<n;i++)
			if(ar[i] == element)
				return i;
		return -1;
	}
	int binarysearch( int first, int last, int element)
	{
		int mid = (first + last)/2;  
		while(first <= last)
		{  
			if(ar[mid] < element)
				first = mid + 1;     
			else if(ar[mid] == element)  
				return mid;    
			else  
				last = mid - 1;
			mid = (first + last)/2; 			
		}
		return -1;
    }
	int[] ar;
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		Ass6d srch = new Ass6d();
		System.out.println("Searching Algorithm\n\n");
		System.out.print("Enter Size of Array: ");
		int n=scan.nextInt();
		srch.ar= new int[n];
		for(int i=0;i<n;i++)
		{
			System.out.print("Enter Element "+(i+1)+" :");
			srch.ar[i]=scan.nextInt();
		}
		System.out.print("Enter Element To Search: ");
		int element=scan.nextInt();
		int index = -1;
		System.out.println("Options\n1. Linear Search\n2. Binary Search\nEnter Choice: ");
		int ch=scan.nextInt();
		switch(ch)
		{
			case 1: index=srch.linearsearch(n,element);
					break;
			case 2: index=srch.binarysearch(0,n-1,element);
					break;
		}
		scan.close();
		if(index != -1)
			System.out.printf("The Element %d Is Present At Index %d\n",element,index+1);
		else
			System.out.println("Element Not Found!");
		System.out.println();
	}
}