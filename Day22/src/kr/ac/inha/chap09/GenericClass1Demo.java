package kr.ac.inha.chap09;

public class GenericClass1Demo {
    public static void main(String[] args) {
        Cup c = new Cup();

        c.setBeverage(new Beer());
        Beer b1 = (Beer) c.getBeverage();
        //Beverage b1 = (Beer) c.getBeverage();
        c.setBeverage(new Boricha());
        //b1 = (Beverage)c.getBeverage();
        //b1 = (Beer)c.getBeverage();
        //b1 = (Boricha)c.getBeverage();
    }
}
