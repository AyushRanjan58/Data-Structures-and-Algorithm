 class box{
    int height,width,depth;
    void volume(){
        int v = width*height*depth;
        System.out.println("volume of this:"+v);
    }
}

public class test4{
    public static void main(String[] args) {
        box mybox = new box();
        mybox.width = 20;
        mybox.height = 20;
        mybox.depth = 20;
        mybox.volume();

    }
}