import java.util.*;
class number{
    int sum1(int n1,int n2){
       return n1+n2;
    }
    int sum1(int n1,int n2,int n3){
        return n1+n2+n3;
    }
    double sum1(double n1,double n2){
        return n1+n2;
    }
}
public class overloading1{
    public static void main(String[] args){
       Scanner sc = new Scanner (System.in);
       number obj = new number();
       System.out.println("enter the first and second digits:");
       int n1 = sc.nextInt();
       int n2 = sc.nextInt();
       System.out.println("sum is:"+obj.sum1(n1,n2));
       System.out.println("enter the third digits:");
       int n3 = sc.nextInt();
       System.out.println("sum is:"+obj.sum1(n1,n2,n3));
       System.out.println("enter the two digits:");
       double n4 = sc.nextInt();
       double n5 = sc.nextInt();
       System.out.println("sum is:"+obj.sum1(n4,n5));
    }
}
