class A {
    String name = "ayush ranjan";
    void displayparent(){
        System.out.println("hello "+name);
    }
}
class B extends A{
    String child = "AYUSH RANJAN";
    void displaychild(){
        System.out.println("hello "+child);
    }
}

public class single_ineritance{
    public static void main(String[] args) {
        B obj = new B();
        System.out.println("plarentclass "+obj.name);
        obj.displayparent();
        System.out.println("childclass "+obj.child);
        obj.displaychild();
    }
}


