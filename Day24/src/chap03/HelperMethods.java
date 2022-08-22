package chap03;

import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.channels.SocketChannel;

public class HelperMethods {

    public static void sendFixedLengthMessage(SocketChannel socketChannel, String message) {
        try {
            ByteBuffer buffer = ByteBuffer.allocate(64);
            buffer.put(message.getBytes());
            buffer.flip();
            while (buffer.hasRemaining()) {
                socketChannel.write(buffer);
            }
            System.out.println("Sent: " + message);
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public static String receiveFixedLengthMessage(SocketChannel socketChannel) {
        String message = "";
        try {
            ByteBuffer byteBuffer = ByteBuffer.allocate(64);
            socketChannel.read(byteBuffer);
            byteBuffer.flip();
            while (byteBuffer.hasRemaining()) {
                message += (char) byteBuffer.get();
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }
        return message;
    }

    public static void sendMessage(SocketChannel socketChannel, String message) {
        try {
            ByteBuffer buffer = ByteBuffer.allocate(message.length() + 1); // "Hi"를 넣을경우 3바이트(3칸)할당
            buffer.put(message.getBytes()); //
            buffer.put((byte) 0x00);
            buffer.flip(); //포지션은0 리미트는 현포지션 캐파는 그대로 바꾸는것 -> 버퍼의 크기를 알기위함임
            while (buffer.hasRemaining()) { //버퍼에 뭐가 남았는지가 조건
                socketChannel.write(buffer); //소캣채널클래스의 write라는 전용함수를 이용하여 남았다면 보내기
            }
            System.out.println("Sent: " + message);
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public static String receiveMessage(SocketChannel socketChannel) {
        try {
            ByteBuffer byteBuffer = ByteBuffer.allocate(16); //일단 여기서 넉넉하게 잡고 밑에 플립에서 실제 메시지양만큼 압축함
            String message = "";
            while (socketChannel.read(byteBuffer) > 0) {
                char byteRead = 0x00; //종료조건이 0x00인데 한바이트씩 읽다가 이게 나오면 종료하는거임
                byteBuffer.flip(); // 포지션은 0으로 리미트는 현재 포지션으로 할당
                while (byteBuffer.hasRemaining()) {
                    byteRead = (char) byteBuffer.get();
                    if (byteRead == 0x00) {
                        break;
                    }
                    message += byteRead;
                }
                if (byteRead == 0x00) {
                    break;
                }
                byteBuffer.clear();
            }
            return message;
        } catch (IOException ex) {
            ex.printStackTrace();
        }
        return "";
    }

}