import java.util.*;
import mypkg.*;
class AddInt implements addmul
{
    int val,a,b;
    AddInt(int x, int y)
    {
        a = x;
        b = y;
    }
    public void add()
    {
        val = a + b;
    }
    public void show()
    {
        System.out.print(val);
    }
}

class AddFloat implements addmul
{
    float val,a,b;
    AddFloat(float x, float y)
    {
        a = x;
        b = y;
    }
    public void add()
    {
        val = a + b;
    }
    public void show()
    {
        System.out.print(val);
    }
}

class AddString implements addmul
{
    String val,a,b;
    AddString(String x, String y)
    {
        a = x;
        b = y;
    }
    public void add()
    {
        val = a + b;
    }
    public void show()
    {
        System.out.print("The Value Is : ");
        System.out.println(val);
    }
}

class Ass11a
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("1. Integer Additon\n2. Float Addition\n3. String Addition");
        System.out.println("Enter Your Choice: ");
        int k = scan.nextInt();
        switch(k)
        {
            case 1: System.out.print("Enter First Value: ");
                    int a = scan.nextInt();
                    System.out.print("Enter Second Value: ");
                    int b = scan.nextInt();
                    AddInt x = new AddInt(a,b);
                    x.add();
                    x.show();
                    break;
            case 2: System.out.print("Enter First Value: ");
                    float c = scan.nextFloat();
                    System.out.print("Enter Second Value: ");
                    float d = scan.nextFloat();
                    AddFloat y = new AddFloat(c,d);
                    y.add();
                    y.show();
                    break;
            case 3: System.out.print("Enter First Value: ");
                    scan.nextLine();
                    String e = scan.nextLine();
                    System.out.print("Enter Second Value: ");
                    String f = scan.nextLine();
                    AddString z = new AddString(e,f);
                    z.add();
                    z.show();
                    break;

        }
        System.out.println();
        scan.close();
    }
}