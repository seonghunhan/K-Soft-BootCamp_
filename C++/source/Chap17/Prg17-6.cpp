/**************************************************************
  * 파티션 알고리즘을 재귀적으로 호출해서                     * 
  * 배열을 정렬하는 퀵소트 알고리즘                           *
 **************************************************************/ 
#include <iostream>
using namespace std;

// 함수 선언
void swap(int& x, int& y);
void print(int array[], int size);
int partition(int arr[], int beg, int end);
void quickSort(int arr[], int beg, int end);

int main()
{
  // 정렬되지 않은 배열 선언
  int array[10] = {27, 22, 11,  94, 83, 14, 30, 19, 46, 33};
  // 원본 배열 출력
  cout << "원본 배열: " << endl;
  print(array, 10);
  // 퀵소트로 배열 정렬
  quickSort(array, 0, 9);
  // 정렬된 배열 출력
  cout << "정렬된 배열: " << endl;
  print(array, 10);
  return 0;
} 
// 스왑 함수
void swap(int& x, int& y)
{
  int temp = x;
  x = y;
  y = temp;
}
// 배열을 출력하는 함수
void print(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << array [i] << "   ";
  }
  cout << endl;
}
// 파티션 함수
int partition(int arr[], int beg, int end)
{
  int p = beg;    // 피벗 초기화
  int i = beg;    // i 초기화
  int j = end;    // j 초기화

  while(i < j)
  {
    // j를 왼쪽으로 이동
    while(arr [j] > arr[p])
    {
      j--;
    }
    swap(arr[j], arr[p]);
    p = j;
    // i를 오른쪽으로 이동
    while(arr [i] <  arr [p])
    {
      i++;
    }
    swap(arr[i], arr [p]);
    p = i;
  }
  return p;
}
// 퀵소트 함수
void quickSort(int arr[], int beg, int end)
{
  if(beg >= end || beg < 0)
  {
    return;
  }
  int pivot = partition(arr, beg, end);
  quickSort(arr, beg, pivot - 1);
  quickSort(arr, pivot + 1, end);
}