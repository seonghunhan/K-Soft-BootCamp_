package sec07.recordtype1;

public class CircleDemo {
    public static void main(String[] args) {
        Circle c = new Circle(10);
        System.out.println(c);
        System.out.println(c.radius());
    }
}

record Circle(int radius) {}
