-line.c : 파일 실행 때 매개변수 입력받고 받아오긴 실습
사용법은 ./line.out test1 test2 test3 (더 입력하고 싶으면 더 입력하고...)
argc와 argv가 공백을 기준으로 나뉘어 입력되는 것을 볼 수 있음 

=====

Chap3:
-zombie.c : zombie.out 실행 후, ps aux | grep 'Z' 를 수행해 볼 것
좀비 프로세스는 Z로 뜨기 때문임.

-shm1.c: shm1.out을 실행후,  ipcs -m을 하면 생성한 공유메모리의 정보가 뜸.
이후, ipcrm -m [shmid] 를 입력하여 공유메모리를 해제해줄 것. (ex: ipcrm -m 4)

-namedpipe2.c : (1) mkfifo testfifo를 생성하여 namedpipe를 만들어 줄 것.
(2) exec 3<> testfifo 를 수행할 것, testfifo에, 프로세스가 file을 사용할때 file에 접근하기 위한 정수값인 file descriptor을 붙여주는 것.
(참고로 stdin 은 0, stdout 은 1, stderr 는 2가 이미 할당되어 있으므로, 그 외의 숫자인 3 이상으로 한 것)
(3) echo [testfifo에 넣을 아무 글이나] > testfifo (ex. echo hello > testfifo)
(4) namedpipe2.out 실행해보기. 3에서 넣은 글이 나올 것 (ex. hello가 출력됨)
(5) exec 3>&- (file descriptor 붙인 거 다시 떼기.)

-namedpipe_c.c & namedpipe_s.c : 실행 전, 모든 mkfifo testfifo1과 mkfifo testfifo2를 실행
이 두 실행 파일은 각각 터미널 두 개 켜서 각각 실행할 것

-namedpipe_send.c & namedpipe_receive.c : 각각 터미널 두 개 켜서 각각 실행할 것
단, namedpipe_send는 namedpipe_send.out [namedpipe_receive에 보낼 메시지]로 실행해야함.
(ex. namedpipe_send.out hello)

=====

Chap4: 모든 코드를 컴파일 할 때
gcc -o 이름.out 이름.c -lpthread
맨 뒤에 -lpthread가 들어가야함

-cond.c: 생산자-소비자 문제를 해결해 봄 (이론에서는 3장에 있음)
생산자-소비자 문제: https://ko.wikipedia.org/wiki/%EC%83%9D%EC%82%B0%EC%9E%90-%EC%86%8C%EB%B9%84%EC%9E%90_%EB%AC%B8%EC%A0%9C
물론 다른 동기화(세마포어 등) 도구로도 이 문제를 풀 수 있음.

=====

Chap5: pthread에서 속성 객체를 통해 제공하는 기본 스케쥴링 기법을 적용해봄.
여기서는 안 했지만, pthread_setschedparam과, sched_param을 통해 스케쥴링 기법과 우선순위를 함께 적용가능함.
나중에 필요할 수 있으므로 꼭 기억할 것.

=====

Chap9 : 실습 코드는 없지만 아래 커맨드를 해 볼 것
cat /boot/config-$(uname -r) | grep PGTABLE_LEVELS
이걸 해보면 해당 OS에서 사용하는 페이지 테이블의 레벨을 알 수 있음.

=====

Chap10: 
sample.c : 숫자를 입력해주면 그 수만큼 factorial이 돌아감.
mmap.c : ./mmap.out [file이름]을 입력하면 그 내용을 출력해줌.
파일을 불러올 때 mmap 시스템콜을 사용하는 코드. mmap는 파일을 메모리에 매핑해줌.
ex) ./mmap.out sample.c

sample은 uftrace를 사용하기 위한 것. 
uftrace 설치&설명&사용법 : https://blackinkgj.github.io/uftrace-installation/

여기서 중요한건, gcc를 할때 -pg 플래그를 넣어줘야한다는 것임.
파일 분석을 위한 정보를 컴파일 하면서 함께 삽입해준다는 뜻임. 이것을 통해 우리는 trace가 가능.
(예: gcc -o sample.out sample -pg)

단순히 우리가 짠 유저레벨의 함수들만 볼 때는, uftrace ./sample.out 이것으로 충분함.
하지만 mmap.c 소스 코드를 만들었던 이유는 페이지 폴트를 보려고였음.

sudo uftrace record -k ./mmap.out sample.c
uftrace replay

이걸 해보면 page fault 되는 부분을 볼 수 있음.

=====

chap13-15:
-파일의 종류:
기본적으로 ls -al 했을때 맨 앞에 -가 붙으면 레귤러 파일임.
그러나 그 외에도 파일 종류가 많음. 
d: directory
p: named pipe(fifo)
l : 심볼릭 링크
c : 캐릭터 디바이스 파일은 터미널, 프린터, 키보드 등의 문자 기반 디바이스 파일
b : 블록 디바이스 파일은 하드디스크, CD/DVD 등의 저장 디바이스 파일
(ls -al /dev를 하면 디바이스 파일들이 나옴. 리눅스에서는 디바이스들을 파일 형태로 다룸)

-파일 퍼미션: https://securityspecialist.tistory.com/40
**여기서 링크 카운터는 하드 링크만 갯수 올라감. 같은 inode를 가리키는 링크들을 카운트 하는 것이므로.

-링크 만들기:
ln [파일이름] [하드링크파일이름]
ln -s [파일이름] [심볼릭링크이름]

각각 ls -al 하면 나타나는 모습이 다름.
하드링크는 원본파일을 삭제해도 계속 하드링크로 접근 가능하단 걸 확인 가능.

-cat.c : cat command랑 똑같은 기능을 하게 만든 것.
그러므로 ./cat.out [파일이름] 치면 그 내용 그대로 출력해줌.
ex) ./cat.out fileio.c

-copy.c : cp command랑 똑같은 기능을 하게 만든 것.
그러므로 ./copy.out [카피할파일] [카피파일이름] 을 치면 파일 생성해줌.
ls로 확인 가능.

ex) ./copy.out fileio.c copyfile.c

-fileio : 바이너리모드로 파일 입출력하기.
보통 인터넷에 있는 코드들은 텍스트모드라서 해 본 것.
바이너리 모드와 텍스트 모드의 차이점 인지할 것.