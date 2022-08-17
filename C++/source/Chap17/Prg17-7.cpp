/*************************************************************
 * 재귀적 바이너리 탐색으로 배열에서 특정 값을 찾는 프로그램
 *************************************************************/
#include <iostream>
using namespace std;

// binarySearch 함수 선언(비재귀 함수 + 재귀 함수)
int binarySearch(const int arr[], int size, int value);
int binarySearch(const int arr[], int low, int high, int value);
// 탐색 대상 배열 선언
const int SIZE = 10;
int array[SIZE] = {11, 14, 19, 22, 27, 30, 33, 46, 63, 94};

int main()
{
  // 찾을 값 입력 받기
  int value;
  cout << "찾을 값을 입력해주세요: ";
  cin >> value;
  // 비재귀 함수 binarySearch 호출
  int index = binarySearch(array, SIZE, value);
  if(index == -1)
  {
    cout << "배열에서 값을 찾을 수 없습니다.";
  }
  else 
  {
    cout << "해당 값을 찾았습니다: " << index;
  }	
  return 0;
}
// 비재귀 binarySearch 함수 정의
int binarySearch(const int arr[], int size, int value)
{
  int low = 0;
  int high = size - 1;
  return binarySearch(arr, low, high, value);
}
// 재귀 binarySearch 함수 정의
int binarySearch(const int arr[], int low, int high, int value)
{
  int mid =(low + high) / 2;
  if(low > high)
  {
    return -1;
  }
  else if(value == arr [mid])
  {
    return mid;
  }
  else if(value < arr[mid])
  {
    return binarySearch(arr, low, mid - 1, value);
  }
  else
  {
    return binarySearch(arr, mid + 1, high,  value);
  }
}