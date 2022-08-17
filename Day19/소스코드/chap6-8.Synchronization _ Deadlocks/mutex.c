#include <pthread.h>
#include <stdio.h>

pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;

int sum = 0;
int sum2 = 0;

void *threadRoutine(void *argumentPointer){
	int i;
	//뮤텍스 락을 거는 과정
	pthread_mutex_lock(&counter_mutex);
	for(i = 0; i < 1000000; i++)
		sum++;
	pthread_mutex_unlock(&counter_mutex);
	//뮤텍스 락을 풀었음
	return NULL;
}

void *threadRoutine2(void *argumentPointer){
	int i;
	for(i = 0; i < 1000000; i++)
		sum2++;
}

int main(){
	pthread_t threadID1, threadID2;
	pthread_t threadID3, threadID4;

	pthread_create(&threadID1, NULL, threadRoutine, NULL);
	pthread_create(&threadID2, NULL, threadRoutine, NULL);

	pthread_create(&threadID3, NULL, threadRoutine2, NULL);
	pthread_create(&threadID4, NULL, threadRoutine2, NULL);

	pthread_join(threadID1, NULL);
	pthread_join(threadID2, NULL);

	pthread_join(threadID3, NULL);
	pthread_join(threadID4, NULL);

	printf("뮤텍스를 이용한 결과 합: %d\n", sum);
	printf("뮤텍스를 이용하지 않은 결과 합: %d\n", sum2);

	return 0;
}
