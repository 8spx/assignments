import java.util.*;
class Mathexception extends Exception
{

    Mathexception(String message)
    {
        super(message);
    }
}
class Overflowexception extends Mathexception
{

    Overflowexception(String message)
    {
        super(message);
    }
}
class Underflowexception extends Mathexception
{

    Underflowexception(String message)
    {
        super(message);
    }
}

class Ass9d {
    static void check(int num) throws Mathexception
    {
        if(num > 100)
        throw new Overflowexception("Overflow Exception Has Occurred.");
        else
        throw new Underflowexception("Underflow Exception Has Occurred.");
    }
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter A Value");
        int n = scan.nextInt();
        try{

            try{
                check(n);
            }
            catch(Overflowexception e)
            {
                throw e;
            }
            catch(Underflowexception e)
            {
                throw e;
            }

        }
        catch(Mathexception e)
        {
            e.printStackTrace();
        }
        finally{
            System.out.println("Expection Has Caught.");
        }

    }
}
