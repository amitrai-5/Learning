#include<stdio.h>
#include<pthread.h>
#include<signal.h>
void my_handler(int signal)
{
	printf("Received the signal:%d\n",signal);

}

void* fun(void* arg)
{
	struct sigaction sa;
	sa.sa_handler = my_handler;
	//sa.sa_flags = SA_RESTART;
	sigaction(13,&sa,NULL);
	printf("Exiting the thread function\n");

}

int main(int argc, char* argv[])
{
	pthread_t tid;
	pthread_create(&tid,NULL,fun,NULL);
	pthread_kill(tid, 13);
	pthread_join(tid,NULL);

	return 0;
}
