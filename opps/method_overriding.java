class vehical{
    void start(){
        System.out.println("vehical starts now");
    }
}
class car extends vehical{
    void start(){
        System.out.println("sound of the car");
    }
}
class bike extends vehical{
    void start(){
        System.out.println("sound of the bike");
    }
}

public class method_overriding{
    public static void main(String[] args) {
        vehical obj;
        obj = new vehical();
        obj.start();
        obj = new car();
        obj.start();
        obj = new bike();
        obj.start();

    }
 }
