import java.util.*;
class Student{
    int id;
    String name;
    Student(int id,String name){
        this.id=id;
        this.name=name;
    }
}

class SortByName implements Comparator<Student>{
    public int compare(Student a,Student b){
        return a.name.compareTo(b.name);
    }
}

public class comparator1{
    public static void main(String args[]){
        ArrayList<Student> list = new ArrayList<>();
        list.add(new Student(4,"ayush"));
        list.add(new Student(6,"rohit"));
        list.add(new Student(1,"ranjan"));

        Collections.sort(list,new SortByName());

        for(Student s:list){
            System.out.println(s.id+" "+s.name);
        }
    }
}