package kr.ac.inha.net.chap01;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class ThreadedEchoServer implements Runnable{
    private static Socket clientSocket;

    public ThreadedEchoServer(Socket clientSocket) {
        this.clientSocket = clientSocket;
    }

    public static void main(String[] args) {
        System.out.println("스레드 에코 서버 구동...");
        try(ServerSocket serverSocket = new ServerSocket(7000)){
            while (true){
                System.out.println("연결 대기중...");
                clientSocket = serverSocket.accept();
                ThreadedEchoServer tes = new ThreadedEchoServer(clientSocket);
                new Thread(tes).start();
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
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
