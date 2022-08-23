package ThreadPoolgogo;

//import java.util.concurrent
//Locks : 상호 배제를 사용할 수 있는 클래스 제공
//Atomic : 동기화 되어 있는 변수 제공
//Executors : 쓰레드 풀 생성, 생명주기 관리, Task 등록 및 실행 등을 처리
//Queue : 쓰레드 안정성을 가진 FIFO 큐 제공
//Synchronizers : 특수 목적의 동기화 처리를 위한 클래스 제공 (Semaphore, CountDownLatch, CyclicBarrie, Pahser, Exchanger)



import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadPoolExecutor;

public class ThreadPoolDemo {
    public static void main(String[] args) {
        ExecutorService eService = Executors.newFixedThreadPool(3); //3개의 고정사이즈 스레드 발생


        for(int k = 0; k < 5; k++){ //쓰레드 5번 만들기
            Runnable r = () -> { //Runnable 인터페이스 사용 (Run 메소드는 람다식 사용할때 생략가능)
                ThreadPoolExecutor tpe = (ThreadPoolExecutor) eService;
                System.out.println(tpe.getPoolSize() + " : " + Thread.currentThread().getName());
                System.out.println(7/0); // 일부로 예외 발생시킴 -> 쓰레드를 파괴하고 다시만듬 그래서 3개의 범위를 벗어날 수 있음
            };
            //eService.execute(r); //에러나면 그순간 파괴하고 다시만듬
            eService.submit(r); //에너라면 파괴하지않고 다시 사용함 (가급적 execute보다는 submit사용)
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        eService.shutdown();

    }
}