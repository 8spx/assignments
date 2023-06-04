import java.applet.*;
import java.awt.*;

public class Ass12b extends Applet implements Runnable{
    boolean flag;
    Thread t;
    public void start()
    {
          t = new Thread(this);
          t.start();
          flag=true;
    }
    public void run()
    {
          while(true)
          {
            try{
              if(flag)
              flag=false;
              else
              flag=true;
              t.sleep(1000);
              repaint();
            }
            catch(Exception e)
            {}
          }
    }
    public void paint(Graphics g)
    {
          //outline
          g.drawLine(125,400,375,400);
          g.drawLine(125,400,125,275);
          g.drawLine(375,400,375,275);
          g.drawLine(100,300,125,275);
          g.drawLine(400,300,375,275);
          g.drawLine(400,300,400,250);
          g.drawLine(100,300,100,250);
          g.drawLine(150,200,100,250);
          g.drawLine(150,200,150,100);
          g.drawLine(200,100,200,150);
          g.drawLine(150,100,200,100);
          g.drawLine(250,100,200,150);
          g.drawLine(250,100,400,250);

          //vent
          //g.drawOval(225,180,50,50);

          g.setColor(Color.BLACK);
          //window
          g.drawRect(150,300,35,35);
          g.drawRect(315,300,35,35);
          //dooropen
          if(flag)
            g.drawRect(225,300,50,100);
          //doorclose
          else
            g.fillRect(225,300,50,100);
    }
}
