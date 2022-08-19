package kr.ac.inha.network1;

import java.io.IOException;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.UnknownHostException;

public class IpDemo {

    public static void main(String[] args) {
        InetAddress addr = null;
        try {
            addr = InetAddress.getByName("www.inha.ac.kr");
            addr.isReachable(1000);
            System.out.println(addr.getCanonicalHostName());
            System.out.println(addr.getHostAddress());
            System.out.println(addr.getHostName());
        } catch (UnknownHostException e) { //getByName의 예외처리
            System.out.println("URL 주소 확인하셈");
            //e.printStackTrace();
        } catch (IOException e) { //isReachable만의 예외처리 (isReachable은 문법상 IOException을 요구함)
            System.out.println("대기 시간이 지났습니다");
            e.printStackTrace();
        }
        System.out.println(addr);
    }
}
