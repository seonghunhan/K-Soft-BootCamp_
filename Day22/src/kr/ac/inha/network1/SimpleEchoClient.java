package kr.ac.inha.network1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class SimpleEchoClient {
    public static void main(String[] args) {
        System.out.println("에코 클라이언트 구동...");
        try{
            System.out.println("연결 대기 중...");
            InetAddress localAddr = InetAddress.getLocalHost();

            try(
                    // 여기 localAddr에 서버쪽 IP를 넣으면 되는듯 그럼 포트번호만 맞으면 다른사람이랑도 쌉가능함
                    Socket clientSocket = new Socket("165.246.116.144", 6000);
                    // 클라이언트 소켓 객체 생성
                    PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
                    // 서버한테 보낼 데이터를 저장할 버퍼
                    BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                    // 서버로로 부터 받은 데이터를저장하는 버퍼
                    ){
                System.out.println("서버 연결됨");
                Scanner cin = new Scanner(System.in);
                // 키보드로 문자열을 입력 받을 객체 생성

                while(true){
                    System.out.print("메시지 입력 : ");
                    String inputLine = cin.nextLine();
                    if("quit".equalsIgnoreCase(inputLine))
                        break;
                    out.println(inputLine);

                    System.out.println("서버 응답 : " + br.readLine());
                }

            }catch (IOException ex) {

            }
        }catch (IOException ex) {

        }
        System.out.println("에코 클라이언트 종료!");
    }
}
