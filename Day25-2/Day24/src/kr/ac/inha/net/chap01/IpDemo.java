package kr.ac.inha.net.chap01;

import java.io.IOException;
import java.net.InetAddress;
import java.net.UnknownHostException;

public class IpDemo {
    public static void main(String[] args) {
        InetAddress addr = null;
        try {
            addr = InetAddress.getByName("www.inha.ac.kr");
            addr.isReachable(2000);
            System.out.println("CanonicalHostName: " + addr.getCanonicalHostName());
            System.out.println("HostAddress: " + addr.getHostAddress());
            System.out.println("HostName: " + addr.getHostName());
        } catch (UnknownHostException e) {
            System.out.println("URL 주소를 확인하세요!");
            //throw new RuntimeException(e);
        } catch (IOException e) {
            System.out.println("대기 시간이 지났습니다");
            throw new RuntimeException(e);
        }
        System.out.println(addr);
    }
}
