package Sync;

import java.util.concurrent.CountDownLatch;

class CountDownLatchService implements Runnable{

    private CountDownLatch latch;
    private int delay;

    public CountDownLatchService(CountDownLatch latch, int delay){
        this.latch = latch;
        this.delay = delay;
    }

    @Override
    public  void run(){
        try{
            Thread.sleep(delay*1000);
            System.out.println(delay + " countDOwn");
            latch.countDown(); // count 값 --
            } catch (Exception e) {
            e.printStackTrace();
        }

    }
}

public class CountDownLatchDemo {
    public static void main(String[] args) {
        CountDownLatch latch = new CountDownLatch(2); // 2개니깐 3개중에 2개가 동작하는 시점인 2초후에 메인동작임

        //작업 스레드
        new Thread(new CountDownLatchService(latch, 3)).start();
        new Thread(new CountDownLatchService(latch, 2)).start(); //2초뒤 카운트다운
        new Thread(new CountDownLatchService(latch, 1)).start(); //1초뒤 카운트다운

        System.out.println("메인 스레드 대기");

        try{
            latch.await();
            }catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("메인 스레드 동작");
    }
}
