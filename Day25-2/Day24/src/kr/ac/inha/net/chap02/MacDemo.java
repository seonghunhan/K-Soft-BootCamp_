package kr.ac.inha.net.chap02;

import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Collections;
import java.util.Enumeration;

public class MacDemo {
    public static void main(String[] args) {
        InetAddress address = null;
        try {
            address = InetAddress.getLocalHost();
            System.out.println("IP address: " + address.getHostAddress());
            NetworkInterface network = NetworkInterface.getByInetAddress(address);
            System.out.println("MAC address: " + getMACIdentifier(network));

            Enumeration<NetworkInterface> interfaceEnumeration = NetworkInterface.getNetworkInterfaces();
            System.out.println("Name  MAC Address");
//            for(NetworkInterface elem : Collections.list(interfaceEnumeration)){
//                System.out.printf("%-6s %s\n", elem.getName(), getMACIdentifier(elem));
//            }
            Collections
                    .list(interfaceEnumeration)
                    .stream()
                    .forEach((elem) -> {
                        System.out.printf("%-6s %s\n", elem.getName(), getMACIdentifier(elem));
                    });
        } catch (UnknownHostException e) {
            throw new RuntimeException(e);
        } catch (SocketException e) {
            throw new RuntimeException(e);
        }
    }

    private static String getMACIdentifier(NetworkInterface network) {
        StringBuilder identifier = new StringBuilder();

        try {
            byte[] macBuffer = network.getHardwareAddress();
            if(macBuffer != null){
                for(int i=0; i<macBuffer.length;i++){
                    identifier.append(String.format("%02X%s",
                            macBuffer[i],
                            (i < macBuffer.length-1)? "-" : ""));
                }
            }else{
                return "---";
            }
        } catch (SocketException e) {
            throw new RuntimeException(e);
        }
        return identifier.toString();
    }
}
