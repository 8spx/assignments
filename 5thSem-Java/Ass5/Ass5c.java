import java.util.*;
import java.lang.Math;
class Ass5c{
	static int factorial(int n){
		int f = 1;
		for(int i = 2; i <=n; i++)
			f *= i;
		return f;
	}
	static boolean special(int n){
		int sum = 0;
		int temp = n;
		while(n != 0){
			sum += factorial(n%10);
			n /= 10;
		}
		if(sum == temp)
			return true;
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
		for(int i = down; i <= up; i++)
		{
			if(special(i))
				System.out.println(i);
		}
	}
}
