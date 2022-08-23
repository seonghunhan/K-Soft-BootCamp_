package NetworkThread;


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ThreadedEchoServer implements Runnable{
    private static Socket clientSocket;

    public ThreadedEchoServer(Socket clientSocket) {
        this.clientSocket = clientSocket;
    }

    public static void main(String[] args) {
        ExecutorService eService = Executors.newFixedThreadPool(2);
        System.out.println("스레드(풀) 에코 서버 구동...");

        try(ServerSocket serverSocket = new ServerSocket(10000)){
            while (true){
                System.out.println("연결 대기중..."); //정해둔 스레드가 초과되면 못들옴
                clientSocket = serverSocket.accept(); //접속한 사람들의 정보를 clientSocket에 넣음
                ThreadPoolgogo.ThreadedEchoServer tes = new ThreadPoolgogo.ThreadedEchoServer(clientSocket);
                //new Thread(tes).start(); // 이거는 스레드풀이아니고 접속할때마다 스레드 새로 생성하는 것
                eService.submit(tes);
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }finally {
            eService.shutdown(); // finally는 메모리 수거용으로 무조건 실행하는건데, 여기서는 스레드 수거용으로 사용
            System.out.println("스레드(풀) 에코 서버를 종료합니다");
        }
        // System.out.println("스레드 에코 서버를 종료합니다");
    }
    @Override
    public void run() {
        System.out.println("연결된 클라이언트 : " + Thread.currentThread());
        try(
                BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                // 클라이언트로 부터 받은 데이터를 저장하는 버퍼
                PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
                // 클라이언트한테 보낼 데이터를 저장할 버퍼
        ){
            String inputLine;
            while((inputLine = br.readLine()) != null){
                System.out.println(Thread.currentThread() + " 클라이언트가 보낸 메세지 : " + inputLine);
                out.println(inputLine); // 클라이언트 한테 전송 (메아리)
            }
            System.out.println(Thread.currentThread() + "클라이언트 종료!");
        }catch (IOException ex) {

        }
    }
}