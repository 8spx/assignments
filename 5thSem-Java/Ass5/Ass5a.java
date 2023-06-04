import java.util.*;
class Ass5a{
	static void pattern1(int n){
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<i+1; j++)
				System.out.print("*\t");
			System.out.println();
		}
	}
	static void pattern2(int n){
		char c = 'A';
		for(int i=0; i<n; i++)
		{
			for(int k=1; k<=n-i-1; k++)
				System.out.print("    ");
			for(int j=0; j<i+1; j++,c++)
				System.out.printf("%c       ",c);
			System.out.println();
		}
	}
	static void pattern3(int n){
		for(int i=0; i<n; i++)
		{
			for(int k=1; k<n-i; k++)
				System.out.print("\t");
			for(int j=0,c=1; j<i+1; j++, c++)
				System.out.print(c + "\t");	
			System.out.println();
		}

	}
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		int n,c;
		System.out.print("Enter Number of Lines: ");
		n = scan.nextInt();
		while(true){
			System.out.print("Enter Choice 1, 2, 3: ");
			c = scan.nextInt();
			switch(c)
			{
				case 1:	System.out.println("\nPattern 1:");
						pattern1(n);
						break;
				case 2: System.out.println("\nPattern 2:");
						pattern2(n);
						break;
				case 3:	System.out.println("\nPattern 3:");
						pattern3(n);
						break;
				default:System.out.println("Enter a valid choice");

			}
		}
		//scan.close();
			
	}
}
