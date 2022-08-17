public class FooTest {

    public static void main(String[] args) {
        foo("Hi", 1);
        foo("Hello", 1,2);
        foo("Bye");
    }

    private static void foo(String texts, int... numbers){
        System.out.println(texts + " ");
        for(int number : numbers)
            System.out.println(number + " ");
        System.out.println();
    }
}
