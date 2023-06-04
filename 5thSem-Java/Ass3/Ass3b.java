import java.util.*;
import java.lang.Math;
class Ass3b{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		double a,b,c;
		System.out.println("Enter Co-Efficients:");
		a=scan.nextDouble();
		b=scan.nextDouble();
		c=scan.nextDouble();
		scan.close();
		if(((b*b)-4*a*c)>=0)
		{
			double x1=(-b+(Math.sqrt((b*b)-4*a*c)))/2*a,x2=(-b-(Math.sqrt((b*b)-4*a*c)))/2*a;
			if(x1==x2)
				System.out.printf("The Values of Roots are %f\n",x1);
			else
				System.out.printf("The Value of Root1 is %f and Root2 is %f\n",x1,x2);
		}
		else
			System.out.println("The Roots are Imaginary.");
	}
}
