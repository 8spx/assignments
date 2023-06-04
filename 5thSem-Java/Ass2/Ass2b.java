import java.util.*;
class Ass2b
{
  public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);
	System.out.println("Enter Basic Salary:");
	double bpay = scan.nextDouble();
	scan.close();
	double agp=0.5*bpay;
	double da=0.5*(bpay+agp);
	double hra=0.15*(bpay+agp);
    System.out.printf("Total Salary = %f\n",bpay+da+hra+agp);
  }
}
