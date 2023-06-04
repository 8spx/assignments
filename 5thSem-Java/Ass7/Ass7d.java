import java.util.*;
class Student{
	public String Name,ID,DOB;
	public int English, Mathematics, ComputerScience;
	Student(String ID,String Name,String DOB,int English,int Mathematics,int ComputerScience)
	{
		this.ID = ID;
		this.Name = Name;
		this.DOB = DOB;
		this.English = English;
		this.Mathematics = Mathematics;
		this.ComputerScience = ComputerScience;
	}
	public void displayStatus()
	{
		
		System.out.println();
		System.out.println("\nStudentID: " + ID);
		System.out.println("Student Name: " + Name);
		System.out.println("Date of Birth : " + DOB);
		System.out.printf("Marks of English: %d\n", English);
		System.out.printf("Marks of Mathematics: %d\n", Mathematics);
		System.out.printf("Marks of Computer Science: %d\n", ComputerScience);
	}
}


class Ass7d{
	void displayAll(int n)
	{
		for(int i=0;i<n;i++)
		{
			System.out.println("Details of Student "+(i+1));
			arr[i].displayStatus();	
		}
	}
	void searchbyName(int n,String name)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i].Name.equals(name))
			{
				System.out.println("Details of Student "+(i+1));
				arr[i].displayStatus();
			}
		}
	}
	void searchbyID(int n,String id)
	{
		for(int i=0;i<n;i++)
		{	
			if(arr[i].ID.equals(id))
			{
				System.out.println("Details of Student "+(i+1));
				arr[i].displayStatus();
			}
		}
	}
	Student[] arr;
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter Number of Students: ");
		int n = scan.nextInt();
		Ass7d data = new Ass7d();
		data.arr = new Student[n];
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter Details of Student "+(i+1));
			scan.nextLine();
			System.out.print("Enter StudentID: ");
			String id = scan.nextLine();
			System.out.print("Enter Student Name: ");
			String name = scan.nextLine();
			System.out.print("Enter Date of Birth of Student: ");
			String dob = scan.nextLine();
			System.out.print("Enter Marks of English: ");
			int eng = scan.nextInt();
			System.out.print("Enter Marks of Mathematics: ");
			int math = scan.nextInt();
			System.out.print("Enter Marks of Computer Science: ");
			int compsc = scan.nextInt();
			data.arr[i] = new Student(id,name,dob,eng,math,compsc);
		}
		System.out.println("Available Choices\n1.Display All Students' Data\n2.Search Student By Name\n3.Search Student By ID");
		System.out.print("Enter Your Choice: ");
		int ch = scan.nextInt();
		switch(ch)
		{
			case 1:data.displayAll(n);
					break;
			case 2:System.out.print("Provide Name: ");
					scan.nextLine();
					String name = scan.nextLine();
					data.searchbyName(n, name);
					break;
			case 3:System.out.print("Provide ID: ");
					scan.nextLine();
					String id = scan.nextLine();
					data.searchbyID(n, id);
					break;
			default:System.out.println("Provide a Valid Choice.");
					break;
		}
		scan.close();
		
	}
}