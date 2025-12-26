import java.util.*;

public class iterators_demo{
    public static void main(String[] args){
        List<String>names=new ArrayList<>();
        names.add("alice");
        names.add("bob");
        names.add("charlie");
        Iterator<String>iterator=names.iterator();
        while(iterator.hasNext()){
          String name = iterator.next();
          System.out.println(name);
        }
    }
}
