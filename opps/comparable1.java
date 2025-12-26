import java.util.*;

class Student implements Comparable<Student>{
    int id;
    String name;
    Student(int id,String name){
        this.id=id;
        this.name=name;
    }

    public int compareTo(Student other){
        return this.id-other.id;
    }
}

public class comparable1{
    public static void main(String args[]){
        ArrayList<Student> list = new ArrayList<>();
        list.add(new Student(2,"ayush"));
        list.add(new Student(5,"vatsal"));
        list.add(new Student(3,"imran"));
        list.add(new Student(8,"ranjan"));

        Collections.sort(list);

        for(Student s:list){
            System.out.println(s.id+" "+s.name);
        }
    }
}