import java.util.*;
class Ass6b{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter Size of P Array: ");
		int p=scan.nextInt();
		int[] P = new int[p];
		for(int i=0;i<p;i++)
		{
			System.out.print("Enter Element P "+(i+1)+" :");
			P[i]=scan.nextInt();
		}
		System.out.print("Enter Size of Q Array: ");
		int q=scan.nextInt();
		int[] Q = new int[q];
		for(int i=0;i<q;i++)
		{
			System.out.print("Enter Element Q "+(i+1)+" :");
			Q[i]=scan.nextInt();
		}
		scan.close();
		int[] R = new int[p+q];
		System.out.println("The Resultant Array R:");
		for(int i=0;i<p+q;i++)
		{
			if(i<p)
				R[i] =  P[i];
			else
				R[i] =  Q[i-p];
		}
		for(int i=0;i<p+q;i++)
		{
			System.out.printf("%d\t",R[i]);
		}
		System.out.println();
	}
}