import java.util.*;
class car{
    String name;
    int year;

    public car(String carmaker,int caryear){
          name = carmaker;
          year = caryear;
          System.out.println("consturctor is called for car info");
          System.out.println("Name is "+name);
          System.out.println("year is "+year);
    }
}
public class constructor{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("enter the name:");
        String name = sc.nextLine();
        System.out.println("enter the year:");
        int year = sc.nextInt();
        car obj = new car(name,year);
        //no need for this here sc.close();
    }
}
