import java.util.*;
import java.lang.Math;
abstract class Two_dimensional_figure {
    abstract double calculateArea();
}
class Rectangle extends Two_dimensional_figure {
    double length, breadth;
    Rectangle (double x, double y)
    {
        this.length = x;
        this.breadth = y;
    }
    double calculateArea()
    {
        return (length * breadth);
    }
}
class Triangle extends Two_dimensional_figure {
    double sideA, sideB, sideC;
    Triangle (double x, double y, double z)
    {
        this.sideA = x;
        this.sideB = y;
        this.sideC = z;
    }
    double calculateArea()
    {
        double s = (sideA+sideB+sideC)/2;
        return (Math.sqrt(s * (s - sideA) * (s - sideB) * (s - sideC)));
    }
}
class Ass8f {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Rectangle Area Calculation");
        System.out.print("Enter Value of Length: ");
        double ln = scan.nextDouble();
        System.out.print("Enter Value of Breadth: ");
        double br = scan.nextDouble();
        Two_dimensional_figure rectangle = new Rectangle(ln, br);
        System.out.printf("The Calculated Area of Rectangle is %f.\n",rectangle.calculateArea());
        System.out.println("Triangle Area Calculation");
        System.out.print("Enter Value of Side A: ");
        double a = scan.nextDouble();
        System.out.print("Enter Value of Side B: ");
        double b = scan.nextDouble();
        System.out.print("Enter Value of Side C: ");
        double c = scan.nextDouble();
        Two_dimensional_figure triangle = new Triangle(a, b, c);
        System.out.printf("The Calculated Area of Triangle is %f.\n",triangle.calculateArea());
        scan.close();
    }
}
