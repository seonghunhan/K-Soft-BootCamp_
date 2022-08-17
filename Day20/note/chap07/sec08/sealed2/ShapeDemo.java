package sec08.sealed2;

public class ShapeDemo {
    public static void main(String[] args) {
        Shape[] shapes = { new Circle(10), new Rectangle(20, 20) };
        for (Shape s : shapes)
            showArea(s);
    }

    static void showArea(Shape s) {
        if (s instanceof Circle c)
            System.out.println(c + "의 면적은 " + (3.14 * c.radius() * c.radius()));
        else if(s instanceof Rectangle r)
            System.out.println(r + "의 면적은 " + (r.width() * r.height()));
    }
}

sealed interface Shape permits Circle, Rectangle {
}

final class Circle implements Shape {
    private int radius;

    public Circle(int radius) {
        this.radius = radius;
    }

    public int radius() {
        return radius;
    }

    @Override
    public boolean equals(Object o) {
        Circle circle = (Circle) o;
        return radius == circle.radius;
    }

    @Override
    public int hashCode() {
        return radius;
    }

    @Override
    public String toString() {
        return "Circle[radius=" + radius + "]";
    }
}

record Rectangle(int width, int height) implements Shape {}