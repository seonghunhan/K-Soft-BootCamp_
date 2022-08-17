/*************************************************************
 * 파스칼의 삼각형을 만드는 프로그램                         * 
 *************************************************************/
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // 선언
  int power = 5;
  vector<vector<int>> pascal(power + 1, vector <int>());
  // 래기드 벡터 생성
  for(int i = 0; i <= power; i++)
  {
    for(int j = 0; j < i + 1; j++)
    {
      pascal[i].push_back(0);
    }
  }
  // 래기드 벡터를 파스칼의 삼각형으로 채우기
  for(int i = 0; i <= power ; i++)
  {
    for(int j = 0 ; j < i + 1; j++) 
    {
      if(j == 0 || i == j)
      {
        pascal[i][j] = 1;
      }
      else
      {
        pascal[i][j] = pascal[i-1] [j-1] + pascal[i-1][j];
      }
    }  
  } 
  // 출력
  for(int i = 0; i <= power; i++)
  {
    cout << "(x + y)^" << i << "의 계수 =====> ";
    for(int j = 0 ; j < i + 1; j++) 
    {
      cout << setw(4) << pascal[i][j] << " ";
    } 
    cout << endl;
  }
  return 0;
} 