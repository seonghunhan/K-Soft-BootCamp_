package sec08.sealed1;

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

interface Shape {}

record Circle(int radius) implements Shape {}

record Rectangle(int width, int height) implements Shape {}

record Triangle(int base, int height) implements Shape {}
