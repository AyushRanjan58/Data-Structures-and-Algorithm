// User-defined CHECKED exception
class AgeException extends Exception {
    public AgeException(String message) {
        super(message);
    }
}

public class custom_exception {

    // Method that THROWS a checked exception
    static void checkAge(int age) throws AgeException {
        if (age < 18) {
            throw new AgeException("Age is below 18 — Access Denied!");
        }
        System.out.println("Access Granted.");
    }

    public static void main(String[] args) {
        try {
            checkAge(2);   // This will throw the checked exception
        }
        catch (AgeException e) {
            System.out.println("Caught Checked Exception: " + e.getMessage());
        }

        System.out.println("Program continues...");
    }
}
