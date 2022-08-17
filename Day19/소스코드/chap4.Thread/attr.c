#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *attr_thread1(void *arg){
	printf("Thread 1\n");
	sleep(1);
	return (void *) 1;
}

void *attr_thread2 (void *arg){
	printf("Thread 2\n");
	sleep(1);
	return (void *) 2;
}

int main(){
	pthread_attr_t attr; //스레드 속성
	pthread_t tid1, tid2;
	int status;
	void *result1, *result2;

	pthread_attr_init(&attr);
	status = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
	//스레드 속성을 처음부터 join이 가능한 상태로 설정함
	if(status != 0){
		fprintf(stderr, "Setdetachstate\n");
		exit(1);
	}
	pthread_create (&tid1, &attr, attr_thread1, NULL);
	//스레드1을 스레드 속성 대로 생성함


	status = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	//스레드 속성을  처음부터 detach된 상태로 설정함
	if(status != 0){
		fprintf(stderr, "Setdetachstate\n");
		exit(1);
	}
	pthread_create(&tid2, &attr, attr_thread2, NULL);
	//스레즈 2를 스레드 속성 대로 생성함

	pthread_attr_destroy(&attr); //속성 객체 파괴

	pthread_join(tid1, &result1);
	pthread_join(tid2, &result2);

	printf("res1 = %p\n", result1);
	printf("res2 = %p\n", result2);

	return result1 != (void *) 1 || result2 != (void *) 2;
}
