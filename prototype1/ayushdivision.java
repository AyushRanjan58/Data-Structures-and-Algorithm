// interface positive{
//      void pos();
// }

// interface negative{
//     void neg();
// }

// class more_then_zero implements positive{
//     public void pos(){
//         division d = new division();
//         d.setboth();
//         System.out.println("the result is: "+result);
//     }
// }

// class less_then_zero implements negative{
//     public void neg(){
//         System.out.println("the division is not possible with the given numbers");
//     }
// }

// class division{
//     private int num1;
//     private int num2;
//     public void setboth(int num1,int num2){
//         if(num2>0){
//             int result = num1/num2;
//         }
//         else{
//             less_then_zero l = new less_then_zero();
//             l.neg();
//         }
//     }
//     public int getboth(){
//         return result;
//     }
// }

// public class Division{
//     public static void main(String[] args) {
//         more_then_zero a = new more_then_zero();
//         a.pos();
//         a.neg();
//     }
// }
import java.util.Scanner;

interface positive {
    void pos(int num1, int num2);
}

interface negative {
    void neg();
}

class more_then_zero implements positive {
    public void pos(int num1, int num2) {
        DivisionHelper d = new DivisionHelper();
        d.setboth(num1, num2);  // pass user numbers
        System.out.println("The result is: " + d.getboth());
    }
}

class less_then_zero implements negative {
    public void neg() {
        System.out.println("The division is not possible with the given numbers");
    }
}

class DivisionHelper {
    private int result;

    public void setboth(int num1, int num2) {
        if (num2 != 0) {   // check for division by zero
            result = num1 / num2;
        } else {
            less_then_zero l = new less_then_zero();
            l.neg();
        }
    }

    public int getboth() {
        return result;
    }
}

public class ayushdivision {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();

        if (num2 != 0) {   // ✅ check for zero
            more_then_zero a = new more_then_zero();
            a.pos(num1, num2);
        } else {
            less_then_zero b = new less_then_zero();
            b.neg();
        }

        sc.close();
    }
}

