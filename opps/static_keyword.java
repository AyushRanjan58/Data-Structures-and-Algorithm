class student{
      String name;//instance variable
      static String collage = "manipal university jaipur";//static variable
      static void showcollage(){                    //static method
        System.out.println("collage name "+collage);
      }
}

public class static_keyword{
    public static void main(String[] args) {
         student obj = new student();
         obj.name = "ayush ranjan";
         System.out.println("student name is "+obj.name);
         student.showcollage();//called the methid without creating the object
    }
}
