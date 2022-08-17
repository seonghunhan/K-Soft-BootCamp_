//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//protected:
////private:
////public:
//    long identity;
//public:
//    Person() {
//        cout << this << "부모\n";
//    }
//    ~Person() {
//        cout << this << "부모 객체 RIP\n";
//    }
//
//    void setId(long identity);
//    long getId() const;
//    long getId(int any) const; // 오버로딩
//};
//void Person::setId(long id)
//{
//    identity = id;
//}
//long Person::getId() const
//{
//    return identity;
//}
//long Person::getId(int any) const
//{
//    return 999;
//}
//class Student : public Person
//{
//private:
//    double gpa;
//public:
//    Student() {
//        cout << this << "자식\n";
//    }
//    ~Student() {
//        cout << this << "자식 객체 RIP\n";
//    }
//
//    void setGPA(double gpa);
//    double getGPA() const;
//    void setId(long identity);
//    void set(long identity, double gp);
//};
//void Student::set(long identity, double gp)
//{
//    Person::setId(identity); // delegation
//    gpa = gp;
//    cout << "id(위임)랑 평점을 지정합니다\n";
//}
//void Student::setGPA(double gp)
//{
//    //identity = 99; // private변수는 자식클래스에서 접근 불가능, protected변수는 가능
//    if(gp >= 0.0 && gp <= 4.5)
//        gpa = gp;
//    else {
//        gpa = 0.0;
//        cout << "평점의 입력 범위는 0에서 4.5사이의 값 입니다\n";
//    }
//}
//double Student::getGPA() const
//{
//    return gpa;
//}
//void Student::setId(long identity)
//{
//    cout << "오버라이드된 자식 클래스의 setID를 사용중입니다\n";
//    //Person::setId(identity); // delegation
//   this->identity = identity;
//}
////class Professor {
////public:
////    void test() {
////        identity =
////    }
////};
//int main(){
//    Person p1;
//    //p1.identity = 99;
//    
//    // Person 객체 인스턴스화하고 사용
//    Person person;
//    person.setId(1); // Person 클래스의 setID
//    cout << "Person 객체의 정보: " << endl;
//    cout << "사람의 구분 번호: " << person.getId();
//    cout << "\n사람의 구분 번호: " << person.getId(-9);
//    cout << endl << endl;
//    // Student 클래스 인스턴스화하고 사용
//    Student student;
//    //student.setId(-77); // 오버라이드된 setID가 사용됨
//    //student.setGPA(2.9);
//    student.set(-77, 2.9);
//    cout << "Student 객체의 정보: " << endl;
//    cout << "학생의 구분 번호: " << student.getId() << endl;
//    cout << "학생의 학점: " << student.getGPA();
//    cout << '\n';
//    return 0;
//}