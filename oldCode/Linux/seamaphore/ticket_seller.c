#include<stdio.h>
#include<pthread.h>

//#define NO_OF_TICKET 20

int no_of_ticket = 20;

void* bookMyShow(void* unused)
{
 if(no_of_ticket != 0 )
	no_of_ticket --;
return;
}

void* bookMyShow(void* unused)
{
 if(no_of_ticket != 0 )
	no_of_ticket --;
	return;
}

int main()
{
pthread_t tid[2];
int ret;
ret = pthread_create(&tid[0],NULL,&bookMyShow,NULL);
if(ret != 0){
	perror("Creation of thread fail:%d",ret);
	return -1;
}
ret = pthread_create(&tid[1],NULL,&payTm,NULL);
if(ret != 0) {
	perror("Creation of thread fail:%d",ret);
	return -1;
}
return 0;
}
