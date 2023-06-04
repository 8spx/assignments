import java.util.*;
class Ass3a{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int a,b,c;
		System.out.println("Enter Three Numbers");
		a=scan.nextInt();
		b=scan.nextInt();
		c=scan.nextInt();
		scan.close();
		System.out.printf("The Largest Number is %d\n",(a>b?(a>c?a:c):(b>c?b:c)));
	}	
}
