//example for unchecked custom exception
class AgeException extends RuntimeException{
    AgeException(String message){
        super(message);
    }
}

public class uncheked_exception{
    static void checkedage(int age){
        if(age<18){
           throw new AgeException("age is below 18 access denied");
        }
        System.out.println("registration sucssful");
    }

   public static void main(String args[]){
        uncheked_exception age = new uncheked_exception();
        age.checkedage(17);
    }
}