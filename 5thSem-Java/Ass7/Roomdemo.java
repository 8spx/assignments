import java.util.*;
class Room{
	public double height, width, breadth;
}
class Roomdemo {
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		Room Rm = new Room();
		System.out.print("Enter Value of Height: ");
		Rm.height = scan.nextDouble();
		System.out.print("Enter Value of Weidth: ");
		Rm.width = scan.nextDouble();
		System.out.print("Enter Value of Breadth: ");
		Rm.breadth = scan.nextDouble();
		scan.close();
		System.out.printf("The Volume of Room is %f\n",Rm.height*Rm.width*Rm.breadth);
		
	}
	
}