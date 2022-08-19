package kr.ac.inha.chap07;
// P.283 ctrl+c, ctrl+v
interface Animal {
    void sound();
}

class Dog implements Animal {
    public void sound() {
        System.out.println("멍멍~~");
    }
}

class Cuckoo implements Animal {
    public void sound() {
        System.out.println("뻐꾹~~");
    }
}
class Cactus {

}

public class AnimalDemo {
    public static void main(String[] args) {
        Dog d = new Dog();
        Cuckoo c = new Cuckoo();
        Cactus ct = new Cactus();

        //makeSound(ct);
        makeSound(d);
        makeSound(c);
    }

    static void makeSound(Animal a) {
        a.sound();
    }
}
