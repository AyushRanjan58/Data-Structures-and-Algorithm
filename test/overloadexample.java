class overloadexample{
    void add(int a, int b){
        System.out.println("sum of integers:+(a+b)");
    }
    void add(double a, double b){
        System.out.println("sum of doubles:"+(a+b));
    }
    void add(int a, int b, int c){
        System.out.println("sum of three integers:"+(a+b+c));
    }

    public static void main(String[] args) {
        overloadexample obj = new overloadexample();
        obj.add(5,10);
        obj.add(5.5,10.5);
        obj.add(1,2,3);
    }
}
