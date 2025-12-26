// class Rectangle{
//       double length;
//       double breadth;
//       Rectangle(double length, double breadth){
//         this.length = length;
//         this.breadth = breadth;
//       }
// }
// class sphere{
//     double radius;
//     sphere(double radius){
//         this.radius= radius;
//     }
// }
// public class ShapeAreaCalculator{
//     double calculatorArea(Rectangle rectangle){
//         return rectangle.length*rectangle.breadth;
//     }
// }
// double calculateArea(Sphere sphere){
//     return Math.PI*sphere.radius*sphere.radius*4;//4pir^2
// }
// public static void main(String[] args) {
//     Rectangle rect = new Rectanle(5,10);
//     Sphere circ = new Circle(7);

//     ShapeAreaCalculator calculator = new classwork2.ShapeAreaCalculator();
    
//     System.out.println("Area of Rectangle:"+calculator.calculatorArea(rect));
//     System.out.println("Area of sphere:"+ calculator.calculatorArea(circ));
//     }
class Rectangle {
    double length;
    double breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
}

class Sphere {
    double radius;

    Sphere(double radius) {
        this.radius = radius;
    }
}

public class ShapeAreaCalculator {

    double calculateArea(Rectangle rectangle) {
        return rectangle.length * rectangle.breadth;
    }

    double calculateArea(Sphere sphere) {
        return 4 * Math.PI * sphere.radius * sphere.radius; // 4πr^2
    }

    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5, 10);
        Sphere sph = new Sphere(7);

        ShapeAreaCalculator calculator = new ShapeAreaCalculator();

        System.out.println("Area of Rectangle: " + calculator.calculateArea(rect));
        System.out.println("Area of Sphere: " + calculator.calculateArea(sph));
    }
}
