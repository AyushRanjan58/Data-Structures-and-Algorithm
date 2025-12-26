import java.util.*;
public class test1 {
    public static void main(String[] args) {
        System.out.print("enter the age:");
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if(age>=18){
            System.out.println("the person is adult the age is:"+age);
        }
        else{
            System.out.println("the person is not adult");
        }
    }
}