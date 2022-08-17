/*************************************************************
 * 벡터에 이진 탐색을 사용하는 프로그램                      * 
 *************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  // 벡터 인스턴스화  
  vector <int> vec ;
  // 요소 6개 추가
  vec.push_back(17);
  vec.push_back(10);
  vec.push_back(13);
  vec.push_back(18);
  vec.push_back(15);
  vec.push_back(11);
  // 벡터 정렬
  sort(vec.begin(), vec.end());
  // 벡터 탐색
  cout << "10 탐색 결과 = " << boolalpha;
  cout << binary_search(vec.begin(), vec.end(), 10) << endl;
  cout << "19 탐색 결과 = " << boolalpha;
  cout << binary_search(vec.begin(), vec.end(), 19) << endl;
  return 0;
}