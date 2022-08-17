/*************************************************************
 * 메시지 암호화에 사용하는 애플리케이션 파일                *
 *************************************************************/
#include "monoalpha.h"

int main()
{
  MonoAlpha monoalpha;
  monoalpha.encrypt("plainFile", "cipherFile");
  return 0;
}