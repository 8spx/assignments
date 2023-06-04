import java.util.*;
class Ass1b
{
  public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);
	float r = scan.nextFloat();
	float area=3.14f*r*r , perimeter = 2*3.14f*r;
	scan.close();
    System.out.printf("Area = %f\nPerimeter = %f\n",area,perimeter);
  }
}
