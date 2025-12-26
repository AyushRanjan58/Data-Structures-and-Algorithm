
import java.util.*;

class student{
    private String name;
    private int age;

    public void setNaam(String n){
        name = n;
    }
    public void setAge(int a){
        if(a>=0){
            age = a;
        }
        else{
            System.out.println("the entered value is invailed");
        }
    }

    public String getNaam(){
        return name;
    }
    public int getAge(){
        return age;
    }
}

public class get_set{
    public static void main(String[] args) {
        System.out.print("enter the name:");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        student s = new student();
        s.setNaam(name);
        System.out.print("enter the age:");
        int age = sc.nextInt();
        s.setAge(age);

        System.out.println(s.getNaam());
        System.err.println(s.getAge());
    }
}