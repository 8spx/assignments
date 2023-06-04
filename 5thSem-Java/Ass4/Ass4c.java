import java.util.*;
import java.lang.Math;
class Ass4c{
	static boolean checkPrime(int n){
		for(int i = 2; i<Math.sqrt(n); i++)
			if(n % i == 0)
				return false;
		return true;
	}
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		int upperLimit,lowerLimit;
		System.out.print("Enter Lower Limit: ");
		lowerLimit = scan.nextInt();
		System.out.print("Enter Upper Limit: ");
		upperLimit = scan.nextInt();
		scan.close();
		System.out.println("Prime Numbers: ");
		for(int i = lowerLimit; i < upperLimit; i++){
			if(checkPrime(i))
				System.out.print(i + " ");
		}

		System.out.println();
	}
}
