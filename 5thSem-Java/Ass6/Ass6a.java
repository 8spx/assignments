import java.util.*;
class Ass6a{
	static void onedimensional(int[] ar,int n)
	{
		int s=ar[0],l=ar[0];
		for(int i=1;i<n;i++)
		{
			if(ar[i]<s)
				s=ar[i];
			if(ar[i]>l)
				l=ar[i];
		}
		
		System.out.println("The Smallest Element is : "+s);
		System.out.println("The Largest Element is : "+l);
	}
	static void twodimensional(int[][] ar,int p,int q)
	{
		int s=ar[0][0],l=ar[0][0];
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			{
				if(ar[i][j]<s)
				s=ar[i][j];
				if(ar[i][j]>l)
				l=ar[i][j];
			}
		}
		
		System.out.println("The Smallest Element is : "+s);
		System.out.println("The Largest Element is : "+l);
	}
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Options\n1. 1D Array\n2. 2D Array\nEnter Choice: ");
		int ch=scan.nextInt();
		switch(ch)
		{
			case 1: System.out.print("Enter Size of Array: ");
					int n=scan.nextInt();
					int[] ar= new int[n];
					for(int i=0;i<n;i++)
					{
						System.out.print("Enter Element "+(i+1)+" :");
						ar[i]=scan.nextInt();
					}
					onedimensional(ar,n);
					break;
			case 2: System.out.print("Enter Row Size of Array: ");
					int p=scan.nextInt();
					System.out.print("Enter Column Size of Array: ");
					int q=scan.nextInt();
					int[][] arr= new int[p][q];
					for(int i=0;i<p;i++)
					{
						for(int j=0;j<q;j++)
						{
							System.out.print("Enter Element "+(i+1)+" "+(j+1)+" :");
							arr[i][j]=scan.nextInt();
						}
					}
					twodimensional(arr,p,q);
					break;
		}
		scan.close();
		
	}
}