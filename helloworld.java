
import java.util.Scanner;

public class helloworld {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int number = in.nextInt();

// Print the multiplication table of number up to 5

for (int i=1;i<5;i++){

     int value = number*i;

System.out.println(number+"x"+i+"="+value);
}
    }
}
