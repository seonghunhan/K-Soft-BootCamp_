/*************************************************************
 * 세트로 정수를 정렬하는 프로그램                           *
 *************************************************************/
#include <set>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // 빈 정수 세트 생성
  set<int> st;
  // 중복을 포함하는 정수를 세트에 넣기
  st.insert(47);
  st.insert(18);
  st.insert(12);
  st.insert(24);
  st.insert(52);
  st.insert(20);
  st.insert(24);
  st.insert(92);
  st.insert(53);
  st.insert(77);
  st.insert(98);
  st.insert(87);
  // 오름차순으로 세트의 요소 출력
  cout << "오름차순으로 세트의 요소 출력하기" << endl;
  set <int>::iterator iter;
  for(iter = st.begin(); iter != st.end(); iter++)
  {
    cout << setw(4) << *iter;
  }
  cout << endl << endl;
  // 내림차순으로 세트의 요소 출력
  cout << "내림차순으로 세트의 요소 출력하기" << endl;
  set <int>::reverse_iterator riter;
  for(riter = st.rbegin(); riter != st.rend(); riter++)
  {
    cout << setw(4) << *riter;
  }
  cout << endl << endl;
  // 52 뒤의 요소 출력
  set <int>::iterator iter1 = st.find(52);
  iter1++;
  cout << "52 뒤의 요소 = " << *iter1 << endl;
  // 20 앞의 요소 출력
  set <int>::iterator iter2 = st.find(20);
  iter2--;
  cout << "20 앞의 요소 = " << *iter2 << endl;
  return 0;
}