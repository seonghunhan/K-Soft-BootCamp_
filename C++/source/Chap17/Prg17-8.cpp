/*************************************************************
 * 하노이탑 문제를 푸는 프로그램
 *************************************************************/ 
#include <iostream>
using namespace std;

// 함수 선언
void towers(int, char, char, char);
void moveOneDisk(char, char);

int  main()
{
  // 변수 선언
  int n;
  // 입력
  do 
  {
    cout << "디스크 수를 입력해주세요(1~4 범위): ";
    cin >> n;
  } while((n < 1) ||(n > 4));
  // 함수 호출
  towers(n, 'A', 'C', 'B');
}

// towers 함수 정의
void towers(int num, char source, char dest, char aux)
{
  if(num == 1)
  {
    moveOneDisk(source, dest);
  }
  else
  {
    towers(num - 1, source, aux, dest);
    moveOneDisk(source, dest);
    towers(num - 1, aux, dest, source);
 } 
}
// moveOneDisk 함수 정의
void moveOneDisk(char start, char end)
{
  cout << "디스크를 " << start << "에서 " << end << "로 이동했습니다."<< endl;
}