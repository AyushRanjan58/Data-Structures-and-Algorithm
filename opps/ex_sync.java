//example of syncronization
import java.util.*;

class count{
    int count = 0;
    synchronized void increment(){
        count++;
    }
}

public class ex_sync{
    public static void main(String args[]){
        count c = new count();

        Thread t1 = new Thread(()->{
          for(int i=0;i<1000;i++) c.increment();
        });

        Thread t2 = new Thread(()->{
            for(int i=0;i<1000;i++) c.increment();
        });

        t1.start();
        t2.start();
        t1.join();
        t2.join();

        System.out.println("total count ="+c.count);
    }
}