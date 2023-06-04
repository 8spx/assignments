import java.util.*;
class Ass7c{
	long fibonacci(int n){
		if(n<2)
			return n;
		else
			return fibonacci(n-1) + fibonacci(n-2); 
	}

	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		Ass7c fib = new Ass7c();
		int n;
		System.out.print("Enter Value of N: ");
		n = scan.nextInt();
		scan.close();
		System.out.print("Series: ");
		for(int i=1;i<=n;i++){
			System.out.print(fib.fibonacci(i) + " ");
		}
		System.out.println();
	
	}
}
