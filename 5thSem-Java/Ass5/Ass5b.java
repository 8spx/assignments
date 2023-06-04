import java.util.*;
import java.lang.Math;
class Ass5b{
	static int digitLength(int n){
		int count = 0;
		while(n != 0)
		{
			n /= 10;
			count++;
		}
		return count;
	}

	static boolean automorphic(int n){
		int sq = n*n;
		if(sq % Math.pow(10,digitLength(n)) == n)
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
		System.out.println("Automorphic Numbers:");
		for(int i = down; i <= up; i++)
		{
			if(automorphic(i))
				System.out.println(i);
		}
	}
}
