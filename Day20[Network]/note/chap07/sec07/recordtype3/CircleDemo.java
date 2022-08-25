package sec07.recordtype3;

public class CircleDemo {
    public static void main(String[] args) {
        Circle c = new Circle(10);
        System.out.println(c);
        System.out.println(c.radius());
        c = new Circle();
        System.out.println(c);
        c = new Circle(-5);
        System.out.println(c);
    }
}

record Circle(int radius) {
    public Circle {
        if (radius < 0)
            radius = 0;
    }

    public Circle() {
        this(0);
    }
}
