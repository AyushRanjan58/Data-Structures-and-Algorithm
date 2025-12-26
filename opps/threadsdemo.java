class A extends Thread {
    public void run(){
        
        for(int i=1;i<100;i++){
            System.out.println("hi");
            try {
                Thread.sleep(10);
            } 
            catch (InterruptedException ex) {
                System.out.println("somethong went wrong");
            }
        }
    }
}
class B extends Thread {
    public void run(){

        for(int i=1;i<100;i++){
            System.out.println("hello");
             try {
                Thread.sleep(10);
            } 
            catch (InterruptedException ex) {
                System.out.println("somethong went wrong");
            }
        }
    }
}

public class threadsdemo{
    public static void main(String[] args) {
        A obj1 = new A();
        B obj2 = new B();
        obj1.start();
        obj2.start();

    }
}