import java.util.*;
class Ass3d{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter Power Consumption in Units:");
		double val = scan.nextDouble();
		scan.close();
		if(val<=200)
			System.out.printf("Amount to be paid = %.2f\n",val*0.5);
		else if(val<=400)
			System.out.printf("Amount to be paid = %.2f\n",100+(val*0.65));
		else if(val<=600)
			System.out.printf("Amount to be paid = %.2f\n",200+(val*0.8));
		else
			System.out.printf("Amount to be paid = %.2f\n",300+val);


	}
}
