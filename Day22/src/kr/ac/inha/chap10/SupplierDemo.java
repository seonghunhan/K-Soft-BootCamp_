package kr.ac.inha.chap10;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.function.DoubleSupplier;
import java.util.function.IntSupplier;
import java.util.function.Supplier;

public class SupplierDemo {
    public static void main(String[] args) {
        Supplier<String> s1 = () -> "apple";
        System.out.println(s1.get());

        Supplier<Integer> s3 = () -> {
            System.out.print("주사위를 굴립니다 ");
            return (int)(Math.random() * 6)+1;
        };
        System.out.println(s3.get());

        IntSupplier s2 = () ->  (int)(Math.random() * 6)+1;
        System.out.println(s2.getAsInt());

//        int[] x = { 0 };
//        IntSupplier s2 = () -> x[0]++;
//        for (int i = 0; i < 3; i++)
//            System.out.println(s2.getAsInt());
//
//        DoubleSupplier s3 = () -> Math.random() * 10;
//        System.out.println(s3.getAsDouble());
//
//        SimpleDateFormat format = new SimpleDateFormat("MM월 dd일(E요일) a hh:mm:ss");
//        Supplier<String> s4 = () -> format.format(new Date());
//        System.out.println(s4.get());
    }
}