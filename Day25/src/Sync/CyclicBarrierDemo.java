package Sync;
//어몽어스에서 10명차야 겜시작이 가능한것처럼 지정된 갯수가 되어야 벽을 넘어간다는 느낌

import java.util.concurrent.BrokenBarrierException;
import java.util.concurrent.CyclicBarrier;

class Player implements Runnable{
    private CyclicBarrier barrier;
    private String role;

    public Player(CyclicBarrier barrier, String role){
        this.barrier = barrier;
        this.role = role;

    }

    @Override
    public void run(){
        System.out.println(role + " Entered : " + Thread.currentThread().getName());

        try{
            barrier.await();
        } catch (BrokenBarrierException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

    }

}

public class CyclicBarrierDemo {
    public static void main(String[] args) {
        CyclicBarrier b = new CyclicBarrier(4);

        new Thread(new Player(b, "Student")).start();
        new Thread(new Player(b, "Professor")).start();
        new Thread(new Player(b, "Student")).start();


        try {
            System.out.println("Student Entered : " + Thread.currentThread().getName());
            b.await();
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        } catch (BrokenBarrierException e) {
            e.printStackTrace();
        }
        System.out.println("게임 시작");
    }
}
