package kr.ac.inha.network1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;
import java.util.function.Supplier;
import java.util.stream.Stream;

public class SimpleEchoClientModern {
    public static void main(String[] args) {
        System.out.println("에코 클라이언트 구동....");
        try{
            System.out.println("연결 대기 중...");
            InetAddress localAddr = InetAddress.getLocalHost();
            try(
                    Socket clientSocket = new Socket(localAddr, 6000);
                    BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                    // 클라이언트로 부터 받은 데이터를 저장하는 버퍼
                    PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true)
                    // 클라이언트한테 보낼 데이터를 저장할 버퍼
            ){
                System.out.println("서버 연결됨");
                System.out.print("메시지 입력 : ");
                Scanner cin = new Scanner(System.in);
                Supplier<String> cinInput = () -> cin.nextLine();
                Stream.generate(cinInput).map(i ->{
                    out.println(i);
                    System.out.println("서버 응답 : " + i);
                    System.out.print("메세지 입력 : ");
                    return i;
                }).allMatch(i -> !"quit".equalsIgnoreCase(i));


            }catch (IOException e) {

            }
        } catch (IOException e) {

        }
        System.out.println("에코 서버 종료!");
    }
}