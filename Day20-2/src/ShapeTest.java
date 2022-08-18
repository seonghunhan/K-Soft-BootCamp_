class Shape{

}

class Square extends Shape{

    public void print(){
        System.out.println("정사각형");
    }
}

class Triangle extends Shape{

}

public class ShapeTest {

    static void downcast(Shape sh){ // upcast
        if(sh instanceof Square){ // type check
            Square s = (Square) sh; // downcast
            s.print();
        }else{
            System.out.println("정사각형이 아닙니다.");
        }
    }

    public static void main(String[] args) {
        Shape s = new Shape();
        Square sq = new Square();
        Triangle t = new Triangle();


        downcast(sq);
        downcast(t);
        downcast(s);
    }
}
