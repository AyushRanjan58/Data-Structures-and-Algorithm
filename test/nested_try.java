import java.util.*;

public class nested_try{
    public static void main(String[] args) {
       int a=0;
       int b=0;

       try {
           Scanner sc = new Scanner(System.in);
           System.out.println("enter the value of a:");
           a = sc.nextInt();
           b = 18/a;
           try {
               System.out.println("calculating a by using the value of b");
               a = 18/(b-1);
           } catch (Exception e) {
            System.out.println("the value of b is not valid");
           }
           System.out.println("the value of a:"+a);
       } catch (Exception e) {
        System.out.println("the value of a is not valid");
       }
       finally{
        System.out.println("the code is excuted :)");
       }
       System.out.println("the value of b:"+b);
    }
}
