import java.util.*;
public class while_loop1{
     public static void main(String[] args) {
       System.out.print("enter the number till which you want to print:");
       Scanner sc = new Scanner(System.in);
       int a = sc.nextInt();
       int i = 1;
       while(i<a+1){
           System.out.println(i);
           i = i+1;
       }  
     }
}

