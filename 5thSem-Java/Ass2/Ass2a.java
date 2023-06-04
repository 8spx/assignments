import java.util.*;
class Ass2a
{
  public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);
	System.out.println("Enter Values of A and B:");
	int a = scan.nextInt();
	int b=scan.nextInt();
	scan.close();
    System.out.printf("Before Sort:\nValue of A = %d\nValue of B = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	System.out.printf("After Sort:\nValue of A = %d\nValue of B = %d\n",a,b);

  }
}
