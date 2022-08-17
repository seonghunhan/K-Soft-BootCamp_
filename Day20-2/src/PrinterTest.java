class Printer {
    private int numOfPapers = 0;

    public Printer(int numOfPapers) {
        this.numOfPapers = numOfPapers;
    }

    public void print(int amount) {
        if(numOfPapers ==0){
            System.out.println("종이 없음");
        } else if (numOfPapers < amount){
            System.out.println("필요함 " + (amount - numOfPapers) + "더 필요한 종이.");
            System.out.println("Print" + numOfPapers);
        }else {
            numOfPapers = numOfPapers - amount;
            System.out.println("Print" + numOfPapers);
            System.out.println(numOfPapers + " Left");
        }
    }
}
public class PrinterTest {
    public static void main(String[] args) {
        Printer p1 = new Printer(10);
        p1.print(2);
        p1.print(20);
        p1.print(10);
        System.out.println("하나하나.ㅁㄴㅇasdasd123123");

    }
}
