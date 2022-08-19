package kr.ac.inha.chap09;

public class GenericClass3Demo {
    public static void main(String[] args) {
        Cup c = new Cup();

        c.setBeverage(new Beer());
        //Beer beer = c.getBeverage();
    }
}
