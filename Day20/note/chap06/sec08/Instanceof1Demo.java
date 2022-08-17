package sec08;

public class Instanceof1Demo {
    public static void main(String[] args) {
        Student s = new Student();
        Person p = new Person();

        System.out.println(s instanceof Person);

        System.out.println(s instanceof Student);

        System.out.println(p instanceof Student);

        // System.out.println(s instanceof String);

        downcast(s);
    }

    static void downcast(Person p) {
        if (p instanceof Student s) {
            s.work();
            System.out.println("ok, 하향 타입 변환");
        }
    }
}