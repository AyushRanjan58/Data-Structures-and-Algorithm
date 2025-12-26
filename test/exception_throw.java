public class exception_throw{
    public static void main(String[] args) {
        int i = 6;
        int j = 0;

        try{
            if(i==0){
            throw new ArithmeticException("i don't want to print");
            }
            j = 18/i;
        }
        catch(ArithmeticException e){
            System.out.println("that's the default value\n"+e);
        }
        catch(Exception e){
            System.out.println("something went wrong");
        }
        System.out.println("x:"+j);
    }
}