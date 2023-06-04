import java.util.*;
class Ass8a{
    void rect(int n, char q)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                System.out.print(q);
            System.out.println();
        }
            
    }
    void rect(int a, int b, char q)
    {
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
                System.out.print(q);
            System.out.println();
        }
            
    }
    public static void main(String[] args)
    {
        Ass8a func = new Ass8a();
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Your Choice: \n1.Square\n2.Rectangle");
        int c = scan.nextInt();
        switch(c)
        {
            case 1:System.out.print("Enter Size of Edge: ");
                    int n = scan.nextInt();
                    System.out.print("Enter The Character: ");
                    char q = scan.next().charAt(0);
                    func.rect(n,q);
                    break;
            case 2:System.out.print("Enter Size of Length: ");
                    int a = scan.nextInt();
                    System.out.print("Enter Size of Breadth: ");
                    int b = scan.nextInt();
                    System.out.print("Enter The Character: ");
                    q = scan.next().charAt(0);
                    func.rect(b,a,q);
                    break;
        }
        scan.close();


    }
}