package kr.ac.inha.net.chap01;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class SimpleEchoServer {
    public static void main(String[] args) {
        System.out.println("에코 서버!");
        try (ServerSocket serverSocket = new ServerSocket(6000)){
            System.out.println("연결 대기중.....");
            Socket clientSocket = serverSocket.accept();
            System.out.println("클라이언트 연결됨!");
            try(
                    BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                    // 클라이언트로 부터 받은 데이터를 저장하는 버퍼
                    PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
                    // 클라이언트한테 보낼 데이터를 저장할 버퍼
            ){
                String inputLine;
                while((inputLine = br.readLine()) != null){
                    System.out.println("클라이언트가 보낸 메세지 : " + inputLine);
                    out.println(inputLine); // 클라이언트 한테 전송 (메아리)
                }
            }catch (IOException ex) {

            }
        } catch (IOException ex) {

        } catch (IllegalArgumentException ex){
            System.out.println("포트 번호의 범위는 0에서 65535사이 입니다 (2byte)");
        }
        System.out.println("에코 서버 종료!");
    }
}
