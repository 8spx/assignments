class X{
    int a = 2, b = 3, c, d;

    void add() throws InterruptedException {
        c = a;
        d = b;
        Thread.sleep(500);
        System.out.println(a + b);
    }

    void increase() throws InterruptedException {
        a += 5;
        b += 5;
        Thread.sleep(500);
        System.out.println("New A Value = " + a);
        System.out.println("New B Value = " + b);
    }

}

class Y extends Thread {
    X obj1;

    Y(X obj) {
        obj1 = obj;
    }

    public void run() {
        try {
            obj1.add();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
class Z extends Thread {
    X obj1;

    Z(X obj) {
        obj1 = obj;
    }

    public void run() {
        try {
            obj1.increase();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class Ass10b{
    public static void main(String[] args)
    {
        X myobj = new X();
        new Y(myobj).start();
        new Z(myobj).start();
    }
}
