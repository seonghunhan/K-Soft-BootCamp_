package kr.ac.inha.Phone;

public class Phone {
    String number = "";
    String telecom = "";



    public void smsSend(String texts){
        System.out.println("%s를 전송\n",texts);
    }
    public void smsReceive(String texts){
        System.out.println("%s를 수신\n",texts);

    }
}
