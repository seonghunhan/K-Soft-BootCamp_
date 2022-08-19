package kr.ac.inha.chap14;

public class Thread1Demo {
    public static void main(String[] args) {
//        Thread t = new Thread(new MyRunnable());
//        t.start(); // start()하면 run()의 뭐 없이 걍 한다고 함

        Runnable task = () -> {
                    for (int i = 0; i < 5; i++) {
            System.out.print("잘가. ");
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
            }
        }
        };

        new Thread(task).start();

        // 근데 왜 안녕이 먼저 출력되냐,,ㄴㄴ 밑에는 메인이고 MyRunnable은 작업스레드인데 스레드의 순서는 CPU가 정하는거라서 순서정해진거 없음!!!
        for (int i = 0; i < 5; i++) {
            System.out.print("안녕. ");
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
            }
        }
    }
}

//class MyRunnable implements Runnable {
//    public void run() {
//        for (int i = 0; i < 5; i++) {
//            System.out.print("잘가. ");
//            try {
//                Thread.sleep(500);
//            } catch (InterruptedException e) {
//            }
//        }
//    }
//}