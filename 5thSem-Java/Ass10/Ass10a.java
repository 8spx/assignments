class A extends Thread {
    public void run() {
        for (int i = 1; i < 11; i++)
            System.out.println(i);
    }
}

class B extends Thread {
    public void run() {
        for (int i = 10; i > 0; i--) {
            if (i == 6)
                try {
                    Thread.sleep(10000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            System.out.println(i);
        }
    }
}
class Ass10a
{
    public static void main(String[] args)
    {
        new A().start();
        new B().start();
    }
}