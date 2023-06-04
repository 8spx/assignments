import java.util.*;
import java.lang.Math;
abstract class GeometricObject {
    String color;
    double weight;
    GeometricObject(){
        this.color = "White";
        this.weight = 1.0;
    }
    String getColor(){
        return color;
    }
    double getWeight(){
        return weight;
    }
    abstract double findArea();
    abstract double findCircumference();
}
class Triangle extends GeometricObject {
    double sideA, sideB, sideC;
    Triangle (double x, double y, double z)
    {
        this.sideA = x;
        this.sideB = y;
        this.sideC = z;
    }
    double findArea()
    {
        double s = (sideA+sideB+sideC)/2;
        return (Math.sqrt(s * (s - sideA) * (s - sideB) * (s - sideC)));
    }
    double findCircumference()
    {
        return (sideA + sideB + sideC);
    }
}
class Ass8g {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Triangle");
        System.out.print("Enter Value of Side A: ");
        double a = scan.nextDouble();
        System.out.print("Enter Value of Side B: ");
        double b = scan.nextDouble();
        System.out.print("Enter Value of Side C: ");
        double c = scan.nextDouble();
        GeometricObject triangle = new Triangle(a, b, c);
        System.out.printf("The Calculated Circumference of Triangle is %f.\n",triangle.findCircumference());
        System.out.printf("The Calculated Area of Triangle is %f.\n",triangle.findArea());
        scan.close();
    }
}
