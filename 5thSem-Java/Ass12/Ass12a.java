import java.applet.*;
import java.awt.*;

public class Ass12a extends Applet {
    public void paint(Graphics g)
    {

        // Oval for face outline
        g.setColor(Color.YELLOW);
        g.fillOval(80, 70, 150, 150);

        // Ovals for eyes
        // with black color filled
        g.setColor(Color.BLACK);
        g.fillOval(120, 120, 15, 15);
        g.fillOval(175, 120, 15, 15);

        // Arc for the smile
        g.drawLine(130,190,180,190);
        g.fillArc(130, 180, 50, 20, 180, 180);
    }
}
