import java.util.*;
import java.lang.Math;
class Compmagic{
	static boolean cmagic(int n){
			int sum=0;
			while(n != 0)
			{
				sum += n%10;
				n /= 10;
			}
			if(Math.log10(sum)-(int)Math.log10(sum) == 0)
			{
				int f = 0;
				for()
			}
			return false;
		}

	public static void main(String args[]){	
		Scanner scan = new Scanner(System.in);
		int up, down;
		System.out.print("Enter Lower Limit: ");
		down = scan.nextInt();
		System.out.print("Enter Upper Limit: ");
		up = scan.nextInt();
		scan.close();
		System.out.println("Composite Magic Number: ");
		for(int i=down; i<=up; i++)
		{
			if(cmagic(i))
				System.out.println(i);
		}
	}
}
