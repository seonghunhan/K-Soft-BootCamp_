package kr.ac.inha.chap09;

public class GenMethod1Demo {
    static class Utils {
        public static <T extends Number> void showArray(T[] a) {
            for (T t : a)
                System.out.printf("%s ", t);
            System.out.println();
        }

        public static <T> T getLast(T[] a) {
            return a[a.length - 1];
        }
    }

    public static void main(String[] args) {
        Integer[] ia = { 1, 2, 3, 4, 5 };
        Character[] ca = { 'H', 'E', 'L', 'L', 'O' };

        Utils.<Integer>showArray(ia);
       // Utils.<Character>showArray(ca);

        System.out.println(Utils.getLast(ia));
    }
}
