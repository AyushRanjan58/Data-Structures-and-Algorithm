class example{
    final int MAX_VALUE = 100;
    final void display(){
        System.out.println("this is a final method:");
    }
}

class classwork{
    public static void main(String[] args) {
        example a = new example();
        a.MAX_VALUE = 150;
    }
    void display(){
        System.out.println("ayush");
    }
}