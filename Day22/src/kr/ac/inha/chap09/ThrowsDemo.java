package kr.ac.inha.chap09;

import java.util.Scanner;

public class ThrowsDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            square(in.nextLine());
        } catch (ArithmeticException e) {
            System.out.println("산술 연산 에러");
        } catch (NumberFormatException e) {
            System.out.println("정수가 아닙니다.");
        }
    }
    private static void square(String s) throws NumberFormatException {
        int n = Integer.parseInt(s);
        System.out.println(n * n);
    }
}
