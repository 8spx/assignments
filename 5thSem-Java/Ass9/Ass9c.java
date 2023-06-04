class A{
    void fun()
    {
        System.out.println("Hello");
    }
}
class Ass9c {
    public static void main(String[] args)
    {
        A ob = new A();
        ob = null;
        try{
            ob.fun(); 
        }
        catch(NullPointerException e)
        {
            e.printStackTrace();
        }
        finally
        {
            System.out.println("NULL POINTER EXCEPTION HAS OCCURRED.");
        }
    }
}
