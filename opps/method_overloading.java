class addtion{
    int add(int a,int b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }

    double add(double a,double b){
        return a+b;
    }
}

public class method_overloading{
    public static void main(String[] args) {
        int p,q;
        double r;
        addtion obj = new addtion();
        p = obj.add(5,10);
        q = obj.add(7,8,2);
        r = obj.add(23.4,12.43);
        System.out.println("the addtion is:"+p);
        System.out.println("the addtion is:"+q);
        System.out.println("the addtion is:"+r);
    }
}