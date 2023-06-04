import java.util.*;
import java.lang.Math;
class Ass4d{
		static boolean checkPalindrome(int num){
		int numForward = num, numBackward = 0;
		while(num != 0)
		{
			numBackward *= 10;
			numBackward = numBackward + num % 10;
			num /= 10;
		}
		if(numForward == numBackward)
			return true;
		else
			return false;
	}
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter Number: ");
		int num;
		num = scan.nextInt();
		scan.close();
		if(checkPalindrome(num))
			System.out.println("Palindrome");
		else
			System.out.println("Not Palindrome");

	}
}
