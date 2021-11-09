#include <pthread.h> // for pthread_create, pthread_join, pthread_exit
#include <stdio.h>   // for printf 
#include <stdlib.h>  // for exit
#include <semaphore.h>
#define NITER 1000000
sem_t sem_name;
int cnt = 0;
//pthread_mutex_t lock;
void * Count(void * a)
{
    int i, tmp;
  //  pthread_mutex_lock(&lock);
	sem_wait(&sem_name);
    for(i = 0; i < NITER; i++)   
    {
        tmp = cnt;      /* copy the global cnt locally */
        tmp = tmp+1;    /* increment the local copy */
        cnt = tmp;      /* store the local value into the global cnt */ 
    }
	sem_post(&sem_name);
    //pthread_mutex_unlock(&lock);
}

int main(int argc, char * argv[])
{
    pthread_t tid1, tid2;
	sem_init(&sem_name, 0 , 1);
    if(pthread_create(&tid1, NULL, Count, NULL))
    {
        printf("\n ERROR creating thread 1");
        exit(1);
    }

    if(pthread_create(&tid2, NULL, Count, NULL))
    {
        printf("\n ERROR creating thread 2");
        exit(1);
    }

    if(pthread_join(tid1, NULL))        /* wait for the thread 1 to finish */
    {
        printf("\n ERROR joining thread");
        exit(1);
    }

    if(pthread_join(tid2, NULL))        /* wait for the thread 2 to finish */
    {
        printf("\n ERROR joining thread");
        exit(1);
    }
	sem_destroy(&sem_name);
    if (cnt < 2 * NITER) 
        printf("\n BOOM! cnt is [%d], should be %d\n", cnt, 2*NITER);
    else
        printf("\n OK! cnt is [%d]\n", cnt);
  
    pthread_exit(NULL);
}
