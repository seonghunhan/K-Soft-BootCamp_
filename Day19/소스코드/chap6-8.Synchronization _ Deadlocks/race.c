#include<pthread.h>
#include<stdio.h>

int sum = 0;
void *threadRoutine(void *arg){
	int i;
	for(i = 0; i < 1000000; i++){
		sum++;
	}
	return NULL;
}

int main(){
	pthread_t tid1, tid2;

	printf("Create thread!\n");
	pthread_create(&tid1, NULL, threadRoutine, NULL);
	pthread_create(&tid2, NULL, threadRoutine, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);

	printf("Result :: %d\n", sum);
	return 0;
}
