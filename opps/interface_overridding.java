import java.util.*;
interface a{
    void average();}
interface m{
    void mean();}
interface t{
    void total();
}

class value{
    int a,b,c;
}

class Average extends value implements a{
    public void average(){
        double avg = (a+b+c)/3.0;
        System.out.println("the average of numbers is:"+avg);
    }
}

class Mean extends value implements m{
    public void mean(){
        double men = (a+b+c)/3.0;
        System.out.println("the mean of the numbers is:"+men);
    }
}

class Total extends value implements t{
   public void total(){
        int tol = a+b+c;
        System.out.println("the total of the numbers is:"+tol);
    }
}

public class interface_overridding{
    public static void main(String args[]){
      value obj = new value();
      System.out.println("enter the value of a:");
      Scanner sc = new Scanner(System.in);
      obj.a =sc.nextInt();
      System.out.println("enter the value of b:");
      obj.b=sc.nextInt();
      System.out.println("enter the value of c:");
      obj.c=sc.nextInt();
      Average Avg = new Average();
       Avg.a = obj.a;
        Avg.b = obj.b;
        Avg.c = obj.c;
      Avg.average();
      Mean Men = new Mean();
       Men.a = obj.a;
        Men.b = obj.b;
        Men.c = obj.c;
      Men.mean();
      Total Tol = new Total();
       Tol.a = obj.a;
        Tol.b = obj.b;
        Tol.c = obj.c;
      Tol.total();
    }
}