package kr.ac.inha.chap09;

public class GenericClass1Demo {

    public static void main(String[] args) {
        Cup c = new Cup();

        c.setBeverage(new Beer());
        Beer b1 = (Beer) c.getBeverage();
        c.setBeverage(new Boricha());
        //b1 = (Beer)c.getBeverage(); //캐스팅이 안된다
        //b1 = (Boricha)c.getBeverage(); // 이것도 안됨
    }
}

// 컵에 베버리지를 셋팅함
// 비어랑 보리차는 아무관계가 없음
// 비어랑 보리차는 베버리지를 상속받음