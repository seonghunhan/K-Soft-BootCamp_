package sec08;

public class Instanceof2Demo {
    public static void main(String[] args) {
        Circle c1 = new Circle(5);
        Circle c2 = new Circle(5);
        Circle c3 = new Circle(3);

        System.out.println(c1.equals(c2));
        System.out.println(c1.equals(c3));
    }
}

class Circle {
    int radius;

    public Circle(int radius) {
        this.radius = radius;
    }

    // before pattern matching
//    public boolean equals(Object o) {
//        if (o instanceof Circle) {
//            Circle c = (Circle) o;
//            return c.radius == radius;
//        } else
//            return false;
//    }

    // after pattern matching
    public boolean equals(Object o) {
        return (o instanceof Circle c) && c.radius == radius;
    }
}