//thread life cycle example
import java.util.*;
class mythread extends Thread{
    public void run(){
        System.out.println("the thread is running....");
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}
public class test24{
    public static void main(String args[]){
        mythread t = new mythread();
        System.out.println("the thread is created"+t.getState());
        t.start();
        System.out.println("the thread state after run"+t.getState());
        try{
            Thread.sleep(200);
        }
        catch(Exception e){}
        System.out.println("thread state while running"+t.getState());

        try{
            t.join();
        }
        catch(Exception e){}
        System.out.println("thread state after completion"+t.getState());
    }
}