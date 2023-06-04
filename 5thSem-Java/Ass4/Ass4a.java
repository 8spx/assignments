import java.util.*;
class Ass4a{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int x,n,y=1;
		System.out.println("Enter Value of X:");
		x = scan.nextInt();
		System.out.println("Enter Value of N:");
		n = scan.nextInt();
		scan.close();
		for(int i=0;i<n;i++)
			y*=x;
		System.out.printf("The Value is %d\n",y);
	}
}
