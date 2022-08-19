package kr.ac.inha.chap07;

public class Anonymous2Demo {
    public static void main(String[] args) {
        new Bird() {
            public void move() {
                System.out.println("독수리가 난다~~~.");
            }
        }.move();
//        Bird b = new Bird() {
//            public void move() {
//                System.out.println("독수리가 난다~~~.");
//            }
//        };
//        b.move();
    }
}
