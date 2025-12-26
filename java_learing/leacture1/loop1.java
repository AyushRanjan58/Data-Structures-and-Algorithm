import java.util.*;
public class loop1{
    public static void main(String[] args){
        System.out.print("enter how many times you want to print:");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        for(int i = 0;i<a;i++){
            System.out.println("hello world");
        }
    }
}