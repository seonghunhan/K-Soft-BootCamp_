package kr.ac.inha.network1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.function.Supplier;
import java.util.stream.Stream;

public class SimpleEchoServerModern {
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
//                String inputLine;
//                while((inputLine = br.readLine()) != null){
//                    System.out.println("클라이언트가 보낸 메시지 : " + inputLine);
//                    out.println(inputLine); // 클라이언트 한테 전송 (메아리)
//                }
                Supplier<String> socketInput = () -> { //서플라이이고 인풋없고 리턴있어야하는데 catch에도 넣어줘야함
                    try {
                        return br.readLine();
                    } catch (IOException e) {
//                        e.printStackTrace();
                        return null;
                    }
                };
                Stream<String> s = Stream.generate(socketInput);
                s.map(i -> {
                    System.out.println("클라이언트가 보낸 메시지 : " + i);
                    out.println(i); // 클라이언트 한테 전송 (메아리)
                    return i;
                }).allMatch(i -> i != null);

            }catch (IOException e) {

            }
        } catch (IOException e) {

        }
        System.out.println("에코 서버 종료!");
    }
}
