/**************************************************************
 * 옵저버 패턴 예제의 애플리케이션 파일                       *
 **************************************************************/
#include "observer.h"
#include <cstdlib>
#include <ctime>

int main()
{
  // Subject 클래스 인스턴스화
  Subject subject;
  // Observer 클래스 인스턴스화
  Observer1 observer1(&subject);
  Observer2 observer2(&subject);
  // 구독
  subject.subscribe(&observer1);
  subject.subscribe(&observer2);
  // 이벤트 모방
  bool flag = true;
  while(flag)
  {
    srand(time(0));
    int temp = rand();
    int price = temp %(100 - 10 + 1) + 10;
    if(price < 40)
    {
      subject.notify(price);
      flag = false;
    }
  }
  // 구독 해제
  subject.unsubscribe(&observer1);
  subject.unsubscribe(&observer2);
  return 0;
}