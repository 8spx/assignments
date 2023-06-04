import java.util.*;
import java.lang.Math;
abstract class Distance{
    double pntA, pntB;
    int speed = 60;
    abstract double travelTime();
}
class DistMKS extends Distance{
    DistMKS(double pA, double pB)
    {
        this.pntA = pA * 1.6;
        this.pntB = pB * 1.6;
    }
    double travelTime()
    {
        speed = 100;
        return Math.abs(pntA-pntB)/speed;
    }
}
class Ass8e{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Point A Distance (Miles):");
        double pA = scan.nextDouble();
        System.out.print("Enter Point B Distance (Miles):");
        double pB = scan.nextDouble();
        scan.close();
        Distance reqTime = new DistMKS(pA, pB);
        System.out.printf("%f hour(s) is required to travel from point A to point B.\n",reqTime.travelTime());
    }  

}