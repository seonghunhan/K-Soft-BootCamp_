package kr.ac.inha.net.chap01;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.Socket;
import java.util.Scanner;
import java.util.function.Supplier;
import java.util.stream.Stream;

public class ModernSimpleEchoClient {
    public static void main(String[] args) {
        System.out.println("에코 클라이언트 구동...");
        try{
            System.out.println("연결 대기 중....");
            InetAddress localAddr = InetAddress.getLocalHost(); // "127.0.0.1"
            try(
                    Socket clientSocket = new Socket(localAddr, 6000);
                    // 클라이언트 소켓 객체 생성
                    PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
                    // 서버한테 보낼 데이터를 저장할 버퍼
                    BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                    // 서버로 부터 받은 데이터를 저장하는 버퍼
            ){
                System.out.println("서버 연결됨");
                Scanner cin = new Scanner(System.in);
                System.out.print("메세지 입력 : ");
                Stream.generate(()-> cin.nextLine()).map(i->{
                    out.println(i);
                    System.out.println("서버 응답 : " + i);
                    System.out.print("메세지 입력 : ");
                    return  i;
                }).allMatch(i -> !"quit".equalsIgnoreCase(i));

            }catch (IOException ex) {
            }
        }catch (IOException ex) {

        }
        System.out.println("에코 클라이언트 종료!");
    }
}
