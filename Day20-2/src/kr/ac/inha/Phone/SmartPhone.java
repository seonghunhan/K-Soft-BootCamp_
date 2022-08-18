package kr.ac.inha.Phone;

public class SmartPhone extends Phone {

    public SmartPhone(String number, String telecom){
        super(number, telecom);
    }

    public static void main(String[] args) {
        SmartPhone galaxyNote9 = new SmartPhone("01039319312", "SKT");
        galaxyNote9.smsReceive("7시에 수업 끝나요");
    }
}
