
class ayush{
    String name;
    boolean gate;
    String name(String name){
       if(gate = true){
           System.out.println("enter the name:"+name);
       }
       else{
        System.out.println("error");
       }
       return name;
    }
}
public class boolean1{
    public static void main(String[] args){
        ayush obj = new ayush();
        obj.gate = true;
        obj.name("ranjan");
    }
}