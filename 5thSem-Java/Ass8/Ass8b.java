import java.util.*;
class Employee{
    String EID, Name, City;
    int Basic;
    
    void takedetails(String EID, String Name, String City, int Basic)
    {
        this.EID = EID;
        this.Name = Name;
        this.City = City;
        this.Basic = Basic;
    }
    void showdetails()
    {
        System.out.println("Employee ID: " + EID);
        System.out.println("Name: " + Name);
        System.out.println("City: " + City);
        System.out.println("Salary: " + Basic);
    }
    double salary()
    {
        return Basic;
    }
}

class Company1 extends Employee{
    double salary()
    {
        double AGP = 0.4 * Basic;
        double DA = 0.25 * (Basic + AGP);
        double HRA = 0.1 * (Basic + AGP);
        return (Basic + AGP + DA + HRA);
    }
}

class Company2 extends Employee{
    double salary()
    {
        double AGP = 0.5 * Basic;
        double DA = 0.5 * (Basic + AGP);
        double HRA = 0.15 * (Basic + AGP);
        return (Basic + AGP + DA + HRA);
    }
}
class Ass8b {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Employee Details:");
        System.out.print("Employee ID: ");
        String EID = scan.nextLine();
        System.out.print("Name: ");
        String Name = scan.nextLine();
        System.out.print("City: ");
        String City = scan.nextLine();
        System.out.print("Salary: ");
        int Basic = scan.nextInt();
        System.out.println("Enter Your Choice: \n0.Employee Details\n1.Company1\n2.Company2");
        int c = scan.nextInt();
        switch(c)
        {
            case 0:
                    Employee emp = new Employee();
                    emp.takedetails(EID, Name, City, Basic);
                    emp.showdetails();
                    break;
            case 1:
                    Employee cmp1 = new Company1();
                    cmp1.takedetails(EID, Name, City, Basic);
                    System.out.println("The Gross Pay: " + cmp1.salary());
                    break;
            
            case 2:
                    Employee cmp2 = new Company2();
                    cmp2.takedetails(EID, Name, City, Basic);
                    System.out.println("The Gross Pay: " + cmp2.salary());
                    break;
        }
        scan.close();
    }
    
}
