package kr.ac.inha.chap09;

public class Cup<T> { //T는 상황에 따라서 바뀜
    private T beverage;

    public T getBeverage() {
        return beverage;
    }

    public void setBeverage(T beverage) {

        this.beverage = beverage;
    }
}
