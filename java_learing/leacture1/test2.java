
import java.util.Scanner;

public class test2{
    public static void main(String[] args) {
        System.out.print("enter the button number:");
        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();

        switch(button){
            case 1: System.out.println("hello");
            break;
            case 2: System.out.println("namaste");
            break;
            case 3: System.out.println("bojure");
            default: System.out.println("the entered value is invailed");
        }

    }
}