package kr.ac.inha.chap12;

public class Soldier {
    public static int MALE = 0;
    public static int FEMALE = 1;

    private String name;
    private int gender;
    private int age;
    private int grade;

    public Soldier(String name, int gender, int age, int grade) {
        this.name = name;
        this.gender = gender;
        this.age = age;
        this.grade = grade;
    }

    public String getName() {
        return name;
    }

    public int getGender() {
        return gender;
    }

    public int getAge() {
        return age;
    }

    public int getGrade() {
        return grade;
    }
}
