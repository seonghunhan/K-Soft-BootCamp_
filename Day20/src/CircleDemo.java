class Circle{
    private double radius;

    public Circle() {
        radius = 1.0;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public Circle(double radius) {
        this.radius = radius;
    }
}


public class CircleDemo {
    public static void main(String[] args) {
        Circle c1 = new Circle(10.0);

    }
}
