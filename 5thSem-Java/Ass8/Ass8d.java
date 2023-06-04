import java.util.*;
class Number{
    int x;
    Number(int num)
    {
        this.x = num;
    }
    void displayNum(){}
}

class HexNum extends Number{
    HexNum(int x)
    {
        super(x);
    }
    void displayNum()
    {
        String Value = "";
        char[] HEXAT = {'A', 'B', 'C', 'D', 'E', 'F'};
        /*IMPLEMENT*/
        while(x != 0)
        {
            if(x%16 >=10)
            {
                Value += HEXAT[(x%16)-10];
            }
            else
            {
                Value += x%16;
            }
            x /= 16;
        }
        for(int i = Value.length()-1; i >= 0 ; i--)
        System.out.print(Value.charAt(i));
    }
}

class OctalNum extends Number{
    OctalNum(int x)
    {
        super(x);
    }
    void displayNum()
    {
        String Value = "";
        /*Implement*/
        while(x != 0)
        {
            Value += x%8;
            x /= 8;
        }
        for(int i = Value.length()-1; i >= 0 ; i--)
        System.out.print(Value.charAt(i));
    }
}

class Ass8d{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter A Number");
        int num = scan.nextInt();
        scan.close();
        Number changenum = new HexNum(num);
        System.out.print("Hexadecimal Value: ");
        changenum.displayNum();
        System.out.println();
        changenum = new OctalNum(num);
        System.out.print("Octal Value: ");
        changenum.displayNum();
        System.out.println();
    }
}