import java.util.*;

public class exception{
    public static void main(String[] args) {

        int i = 0;
        int j = 0;

        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the value of i:");
            i = sc.nextInt();

            j = 18 / i;    // may cause exception

        } catch (Exception e) {
            System.out.println("something went wrong"+e.getMessage());
        } finally {
            System.out.println("finally block executed");
        }

        System.out.println("x: " + j);
    }
}
