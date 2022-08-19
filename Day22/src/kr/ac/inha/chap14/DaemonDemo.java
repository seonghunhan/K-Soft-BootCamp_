package kr.ac.inha.chap14;

public class DaemonDemo {
    public static void main(String[] args) {
        Runnable task = () -> {
            for (int i = 0; i < 3; i++) {
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                }
                System.out.println(Thread.currentThread().getName());
            }
        };

        Thread t1 = new Thread(task, "작업 스레드");
        // t1.setDaemon(true); //작업 스레드가 메인 스레드에 종속되게 만드는 것으로 메인이 끝나면 작업스레드도 끝나게 하는 것
        t1.start();

        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
        }
        System.out.println("메인 스레드가 끝났습니다.");
    }
}