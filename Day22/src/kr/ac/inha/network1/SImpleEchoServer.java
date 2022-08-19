package kr.ac.inha.network1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class SImpleEchoServer {
    public static void main(String[] args) {
        System.out.println("에코 서버");
        try(ServerSocket serverSocket = new ServerSocket(6000)){
            System.out.println("연결 대기중...");
            Socket clientSocket = serverSocket.accept();
            System.out.println("클라이언트 연결됨!");
            try(
                    BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                    // 클라이언트로 부터 받은 데이터를 저장하는 버퍼
                    PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true)
                    // 클라이언트한테 보낼 데이터를 저장할 버퍼
                    ){
                String inputLine;
                while((inputLine = br.readLine()) != null){
                    System.out.println("클라이언트가 보낸 메시지 : " + inputLine);
                    out.println(inputLine); // 클라이언트 한테 전송 (메아리)
                }
            }catch (IOException e) {

            }
        } catch (IOException e) {

        }
        System.out.println("에코 서버 종료!");
    }
}
