package sec07;

import java.util.Objects;

public class CircleDemo {
    public static void main(String[] args) {
        Circle c = new Circle(10);
        System.out.println(c);
    }
}

class Circle {
    private final int radius;

    public Circle(int radius) {
        this.radius = radius;
    }

    public int radius() {
        return radius;
    }

    @Override
    public boolean equals(Object o) {
        return (o instanceof Circle c) && c.radius == radius;
    }

    @Override
    public int hashCode() {
        return Objects.hash(radius);
    }

    @Override
    public String toString() {
        return "Circle[radius=" + radius + "]";
    }
}
