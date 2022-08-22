package chap03;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.nio.channels.ServerSocketChannel;
import java.nio.channels.SocketChannel;
import java.util.Scanner;

public class ChatServer {

    public ChatServer() {
        System.out.println("Chat Server started");
        try {
            ServerSocketChannel serverSocketChannel = ServerSocketChannel.open();
            serverSocketChannel.socket().bind(new InetSocketAddress(5000)); //IP주소는 서버소켓기준이니깐 자기 IP니까 필요없음

            boolean running = true;
            while (running) {
                System.out.println("Waiting for request ...");
                SocketChannel socketChannel
                        = serverSocketChannel.accept(); //클라가 접속을 하면 허가해주는거 (클라의 정보가 socketChannel로 들어감)

                System.out.println("Connected to Client");
                String message;
                Scanner scanner = new Scanner(System.in);
                while (true) {
                    System.out.print("> ");
                    message = scanner.nextLine();
                    if (message.equalsIgnoreCase("quit")) {
//                        HelperMethods.sendFixedLengthMessage(
//                                socketChannel, "Server terminating");
                        HelperMethods.sendMessage(
                                socketChannel, "Server terminating");
                        running = false;
                        break;
                    } else {
//                        HelperMethods.sendFixedLengthMessage(
//                                socketChannel, message);
                        HelperMethods.sendMessage(socketChannel, message); //받는사람정보, 메시지 (헬퍼메소드)
                        // Receive message
                        System.out.println("Waiting for message from client ...");
//                        System.out.println("Message: "
//                                + HelperMethods.receiveFixedLengthMessage(socketChannel));
                        System.out.println("Message: " + HelperMethods.receiveMessage(socketChannel)); // 헬퍼메소드로 또 받음 (헬퍼메소드 참고)
                    }
                }
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public static void main(String[] args) {
        new ChatServer();
    }
}