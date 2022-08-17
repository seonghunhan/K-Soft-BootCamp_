/*************************************************************
 * 메시지 해독에 사용하는 애플리케이션 파일                  *
 *************************************************************/
#include "monoalpha.h"

int main()
{
  MonoAlpha monoalpha;
  monoalpha.decrypt("cipherFile", "plainFile");
  return 0;
}