import java.util.*;

interface Ayush{
   int max_value= 100;

   void startengine();
   default void honk(){
    System.out.println("interface default:beep beep!");
   }
   static int calculatepressure(int speed){
        System.out.println("interface static method is called");
        return speed/10;
   }
}
class Car implements Ayush{
    public void startengine(){
        System.out.println("car starts");
    }
}

public class basic_interface{
    public static void main(String[]args){
        System.out.println("enter the speed of the car:");
        Scanner sc = new Scanner(System.in);
        int speed = sc.nextInt();
        Ayush obj = new Car();
        obj.startengine();
        obj.honk();
       int pressure = Ayush.calculatepressure(speed);
       System.err.println("the pressure is:"+pressure);
    }  
}