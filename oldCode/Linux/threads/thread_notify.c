#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
pthread_mutex_t lock;
pthread_cond_t cond;
int cnt = 0;
pthread_t td[3];
void* td0_fun(void* arg)
{	
	while(cnt < 10)
	{	
		if(cnt == 8)
		{	
			pthread_mutex_lock(&lock);
			pthread_cond_broadcast(&cond);
			pthread_mutex_unlock(&lock);
			//pthread_cond_signal(&cond);
			pthread_join(td[1],NULL);
			pthread_join(td[2],NULL);
		}
		cnt++;
	}

}
void* td1_fun(void* arg)
{
	pthread_mutex_lock(&lock);
	printf("wait is on in TD-1\n");
	pthread_cond_wait(&cond,&lock);
	printf("thread-1: the count :%d\n",cnt);
	pthread_mutex_unlock(&lock);
}
void* td2_fun(void* arg)
{

	pthread_mutex_lock(&lock);
	printf("wait is on in TD-2\n");
	pthread_cond_wait(&cond,&lock);
	printf("thread-2: the count value is:%d\n",cnt);
	pthread_mutex_unlock(&lock);
}
int main()
{
	pthread_create(&td[0],NULL,td0_fun,NULL);
	pthread_create(&td[1],NULL,td1_fun,NULL);
	pthread_create(&td[2],NULL,td2_fun,NULL);
	pthread_mutex_init(&lock, 0);
	pthread_cond_init(&cond, 0);
	pthread_join(td[0],NULL);
	pthread_join(td[1],NULL);
	pthread_join(td[2],NULL);
	
	return 0;
}
