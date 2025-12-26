class Box {
    double length;
    double width;
    double height;

    // Constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Method to calculate volume
    double vol() {
        return length * width * height;
    }
}

class classwork {
    public static void main(String[] args) {
        Box b = new Box(5.0, 1.0, 4.0);
        double volume = b.vol();
        System.out.println("Volume of the box: " + volume);
    }
}
