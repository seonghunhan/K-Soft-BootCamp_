package kr.ac.inha.chap12;

import java.util.Arrays;
import java.util.List;

public class SoldierDemo {
    public static void main(String[] args) {
        List<Soldier> soldiers = Arrays.asList(
                new Soldier("심진우",0, 24, 4),
                new Soldier("최일구",0, 23, 3),
                new Soldier("임다혜",1, 22, 2),
                new Soldier("박민석",0, 23, 1),
                new Soldier("성윤모",0, 21, 1)
        );

        double ageAverage = soldiers
                .stream()
                .filter(m -> m.getGender() == Soldier.MALE)
                //.mapToInt(a -> a.getAge())
                .mapToInt(Soldier::getAge)
                .average().getAsDouble();

        System.out.println("남군 평균 나이 : " + ageAverage);
    }

}
