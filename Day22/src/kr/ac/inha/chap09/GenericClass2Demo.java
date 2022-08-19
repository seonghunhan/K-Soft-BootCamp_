package kr.ac.inha.chap09;

import kr.ac.inha.chap09.generic.Cup;

public class GenericClass2Demo {
    public static void main(String[] args) {
        Cup<Beer> c = new Cup<>();

        c.setBeverage(new Beer());
        Beer b1 = c.getBeverage();

        //c.setBeverage(new Boricha());
        b1 = c.getBeverage();
    }
}
