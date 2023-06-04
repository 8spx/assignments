import java.util.*;
class Ass7b{
	void towerofHanoi(int n, char x, char y, char z) {
      if (n == 1) {
         System.out.println("Move Disk 1 From " + x + " To " + z);
      } else {
         towerofHanoi(n - 1, x, z, y);
         System.out.println("Move Disk " + n + " From " + x + " To " + z);
         towerofHanoi(n - 1, y, x, z);
      }
   }
	
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		Ass7b twh = new Ass7b();
		int n;
		char x,y,z;
		System.out.print("Enter Number of Disks: ");
		n = scan.nextInt();
		System.out.print("Enter Name of First Pole: ");
		x = scan.next().charAt(0);
		System.out.print("Enter Name of Second Pole: ");
		y = scan.next().charAt(0);
		System.out.print("Enter Name of Third Pole: ");
		z = scan.next().charAt(0);
		scan.close();
		twh.towerofHanoi(n, x, y, z);
		
	}
}