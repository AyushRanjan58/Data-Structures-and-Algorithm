import java.util.*;
class n1{
    static int number1;
    static int number2;
    static int number3;
    static void addition(){
        int sum = number1+number2+number3;
        System.out.println("the sum of digits is:"+sum);
    }
}
public class three_number_addition{
    public static void main(String[] args) {
       Scanner sc = new Scanner (System.in);
       n1 obj = new n1();
       obj.number1 = sc.nextInt();
       obj.number2 = sc.nextInt();
       obj.number3 = sc.nextInt();
       n1.addition();
    }
}
