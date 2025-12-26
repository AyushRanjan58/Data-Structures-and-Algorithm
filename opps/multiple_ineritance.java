import java.util.Scanner;

interface x {
    void xmethod();
}
interface y {
    void ymethod();
}

class a{
    String meg = "enter the numbers that has to be divied";
    Scanner sc = new Scanner(System.in);
    String name;
    public void xmethod(){
         System.out.println("enter your name:");
         name = sc.nextLine();
         System.out.println("hello "+name);
         System.out.println(meg);
    }
}
class b extends a implements y {
    int n1, n2;

    public void ymethod() {
        System.out.print("Enter the first number: ");
        n1 = sc.nextInt();

        System.out.print("Enter the second number: ");
        n2 = sc.nextInt();

        System.out.println("First number: " + n1);
        System.out.println("Second number: " + n2);
    }
}

public class multiple_ineritance{
    public static void main(String[]args){
        b obj = new b();
        obj.xmethod();
        obj.ymethod();
        int d = obj.n1/obj.n2;
        System.out.println("the result is:"+d);

    }
}




