package chap02;

import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.net.UnknownHostException;

public class MacDemo {

    public static void main(String[] args) {
        InetAddress address = null;
        try {
            address = InetAddress.getLocalHost();
            System.out.println("IP address: " + address.getHostAddress());
            NetworkInterface network = NetworkInterface.getByInetAddress(address);
            System.out.println("MAC address: " + getMACIdentifier(network));
        } catch (UnknownHostException e) {
            e.printStackTrace();
        } catch (SocketException e) {
            e.printStackTrace();
        }

    }

    private static String getMACIdentifier(NetworkInterface network) {
        StringBuilder identifier = new StringBuilder();

        try {
            byte[] macBuffer = network.getHardwareAddress();
            if(macBuffer != null){
                for(int i=0; i<macBuffer.length; i++){
                    identifier.append(String.format("%02X%s",macBuffer[i], (i <macBuffer.length-1)? "-" : ""));
                }
            }else {
                return "---";
            }
        } catch (SocketException e) {
            e.printStackTrace();
        }
        return identifier.toString();
    }
}

