import java.util.*;
class linkiterator_demo{
    public static void main(String[]args){
      List<String>names=new ArrayList<>();
      names.add("alice");
      names.add("bob");
      names.add("charlie");
      ListIterator<String>listIterator=names.listIterator();
      //traversing forward
      System.out.println("traversing forward");
      while(listIterator.hasNext()){
        System.out.println(listIterator.next());
      }
      //traversing backward
      System.out.println("\ntraversing backward");
      while(listIterator.hasPrevious()){
        System.out.println(listIterator.previous());
      }
    }
}