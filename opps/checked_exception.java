//example of a user-defined exception(checked exception)
class AgeException extends Exception{
     public AgeException(String message){
        super(message);
     }
}

class checked_exception{
    static void checkage(int age) throws AgeException{
        if(age<18){
            throw new AgeException("age is below 18 access denied!");
        }
        System.out.println("access granted");
    }

public static void main(String[]args){
    try {
        checkage(17);
    } catch (AgeException e) {
        System.out.println("cought checked exception:" + e.getMessage());
    }
    System.out.println("prgram continus...");
}
}