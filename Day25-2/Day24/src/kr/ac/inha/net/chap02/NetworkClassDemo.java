package kr.ac.inha.net.chap02;

import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.util.Collections;
import java.util.Enumeration;

public class NetworkClassDemo {
    public static void main(String[] args) {
        try {
            Enumeration<NetworkInterface> interfaceEnum = NetworkInterface.getNetworkInterfaces();
            System.out.printf("Name Display name\n");
            for (NetworkInterface element : Collections.list(interfaceEnum)) {
                System.out.printf("%-5s %-30s\n", element.getName(), element.getDisplayName());

                // Traditional
//                Enumeration<InetAddress> addrs = element.getInetAddresses();
//                for(InetAddress inetAddress : Collections.list(addrs)){
//                    System.out.printf("InetAddress : %s\n", inetAddress);
//                }

                // Modern
                Collections.list(element.getInetAddresses())
                        .stream()
                        .forEach((inetAddress) -> {
                            System.out.printf("InetAddress: %s\n", inetAddress);
                        });
            }
        } catch (SocketException e) {
            throw new RuntimeException(e);
        }
    }
}
