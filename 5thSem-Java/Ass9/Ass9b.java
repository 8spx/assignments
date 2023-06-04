class Ass9b {
    
    public static void main(String[] args)
    {
        int[] arr = new int[10];
        try
        {
            try
            {
                arr[15] = 100;
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                throw e;
            }

        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
        
    }
}
