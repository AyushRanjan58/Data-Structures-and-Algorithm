//constructor overloading
// The class should have the instance variables: title, author, and price.

// Create three constructors:

// A constructor with no parameters (sets default values).

// A constructor with two parameters (title, author).

// A constructor with three parameters (title, author, price).

// Add a method displayInfo() to print book details.

// In the main method, create objects using all three constructors and display their information.
import java.util.*;
class book{
     String title;
     String author;
     double price;
    public book(){
          title = "none";
          author = "aname";
          price = 0;
     }
    public book(String title,String author){
        Scanner sc = new Scanner (System.in);
        title = sc.nextLine();
        author = sc.nextLine();
    }
    public book(String title,String author,int price){
        Scanner sc = new Scanner (System.in);
        title = sc.nextLine();
        author = sc.nextLine();
        price = sc.nextInt();
    }
    void display(){
        System.out.println("book name and author name:"+title+author);
        System.out.println("full book info:"+title+author+price);
    }
}

public class question_overloading{
    public static void main(String[] args) {
        book obj = new book();
        
    }
}
