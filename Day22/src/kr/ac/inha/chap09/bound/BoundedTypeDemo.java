package kr.ac.inha.chap09.bound;

import kr.ac.inha.chap09.Beer;
import kr.ac.inha.chap09.Beverage;
import kr.ac.inha.chap09.Boricha;
import kr.ac.inha.chap09.Fuel;

public class BoundedTypeDemo {
    public static void main(String[] args) {
        Cup<Beer> c1 = new Cup<>();
        Cup<Boricha> c2 = new Cup<>();
        //Cup<String> c3 = new Cup<>();
        //Cup<Fuel> c3 = new Cup<>();
    }
}

class Cup<T extends Beverage> {
    private T beverage;

    public T getBeverage() {
        return beverage;
    }

    public void setBeverage(T beverage) {
        this.beverage = beverage;
    }
}
