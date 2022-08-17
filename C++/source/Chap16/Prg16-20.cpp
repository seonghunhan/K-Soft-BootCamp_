/**************************************************************
 * 헤더 파일에서는 2개의 템플릿 함수를 정의                   * 
 * 첫 번째 함수는 기본 자료형을 문자열로,                     *
 * 두 번째 함수는 문자열을 기본 자료형으로 변환하는 함수      *
***************************************************************/
#ifndef CONVERT_H
#define CONVERT_H
#include <iostream> 
#include <string>
#include <sstream> 
using namespace std;

// toString 함수는 다른 자료형을 문자열로 변환
template<typename T>
string toString(T data)
{
  ostringstream oss("");
  oss << data;
  return oss.str();
}
// toData 함수는 문자열을 다른 자료형으로 변환
template<typename T>
T toData(string strg)
{
  T data; 
  istringstream iss(strg);
  iss >> data; 
  return data;
}
#endif