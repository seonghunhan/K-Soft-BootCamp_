package kr.ac.inha.chap09;
class Soldier implements Comparable {
    private String name;
    int no;

    public Soldier(String name, int no) {
        this.name = name;
        this.no = no;
    }

    public int compareTo(Object o) {
        Soldier t = (Soldier) o;
        return no < t.no ? -1 : (no > t.no ? 1 : 0);
    }

    public String getName() {
        return name;
    }
}
public class SoldierDemo {
    //public static <T extends Comparable> int countGT(T[] a, T elem) {
    //public static <T extends Soldier> void countGT(T[] a, T elem) {
    public static <T extends Soldier> StringBuilder countGT(T[] a, T elem) {
        //int count = 0;
        //String soldiers = " ";
        StringBuilder sb = new StringBuilder();
        for (T e : a)
            if (e.compareTo(elem) < 0)
                sb.append(e.getName() + " ");
                //System.out.println(e.getName());
                //soldiers = soldiers + e.getName() + " ";
                //++count;
        //return count;
              //return soldiers;
        return sb;
    }
    public static void main(String[] args) {
        Soldier[] a = {
                new Soldier("심진우",4),
                new Soldier("최일구",3),
                new Soldier("임다혜",2),
                new Soldier("박민석",1),
                new Soldier("성윤모",1) };

        //countGT(a, a[1]);
        System.out.println(countGT(a, a[1]));
    }
}
