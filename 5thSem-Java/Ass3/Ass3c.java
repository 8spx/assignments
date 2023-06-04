import java.util.*;
class Ass3c{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter Year:");
		int y = scan.nextInt();
		scan.close();
		if(y%400 == 0)
		{
			System.out.println("This is a leap year");
		}
		else
		{
			if(y%4 == 0 && y%100 != 0)
				System.out.println("This is a leap year.");
			else
				System.out.println("This is not a leap year.");
		}
	}
}
