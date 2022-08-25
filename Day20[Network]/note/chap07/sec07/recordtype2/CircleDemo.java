package sec07.recordtype2;

public class CircleDemo {
    public static void main(String[] args) {
        Circle c = new Circle(10);
        System.out.println(c);
        System.out.println(c.radius());
        c = new Circle(-5);
        System.out.println(c);
    }
}

record Circle(int radius) {
    public Circle(int radius) {
        if (radius < 0)
            this.radius = 0;
        else
            this.radius = radius;
    }
}
