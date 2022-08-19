package kr.ac.inha.chap14;

class JoinThread extends Thread {
    int total;

    public void run() {
//        for (int i = 1; i <= 10000; i++)
//            total += i;
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

public class JoinDemo { // join()은 하위 쓰레드가 종료될때까지 기다리고 메모리를 수거하는것(니 포스팅 참고)
    public static void main(String[] args) {
        JoinThread t = new JoinThread();
        t.start();

         try {
        	t.join();
        	System.out.println("스레드 t가 끝날 때까지 대기...");
         } catch (InterruptedException e) {
         }
        System.out.println("총합 : " + t.total);
    }
}