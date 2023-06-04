import java.util.*;
class Ass4b{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int n;
		long t1=0,t2=1;
		System.out.print("Enter Value of N: ");
		n = scan.nextInt();
		scan.close();
		System.out.print("Series: ");
		for(int i=1;i<=n;i++){
			System.out.print(t1 + " ");
			long sum = t1 + t2;
			t1 = t2;
			t2 = sum;
		}

		System.out.println();
	
	}
}
