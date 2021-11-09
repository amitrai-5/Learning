#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX  10
int count = 0;
/* Declaration of thread condition variable 
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER; 
  
 declaring mutex 
 pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; 
*/
pthread_mutex_t mutex;
pthread_cond_t cond;

void *even(void *arg)
{
   while(count < MAX) 
   {
      pthread_mutex_lock(&mutex);
      if(count % 2 != 0)
      { 
         //count is Odd
         pthread_cond_wait(&cond, &mutex); // relaeses the lock and put the thread in sleep
      }
      printf("EVEN: %d \n", count++);
      pthread_mutex_unlock(&mutex);
      pthread_cond_signal(&cond); // signals the other thread to use.
    }
    pthread_exit(0);
}

void *odd(void *arg)
{
   while(count < MAX) 
   {
      pthread_mutex_lock(&mutex);
      if(count % 2 == 0) 
      { 
         //count is even
         pthread_cond_wait(&cond, &mutex);
      }
      printf("ODD : %d \n", count++);
      pthread_mutex_unlock(&mutex);
      pthread_cond_signal(&cond);
    }
    pthread_exit(0);
}

int main()
{
    pthread_t t1;
    pthread_t t2;

    pthread_mutex_init(&mutex, 0);
    pthread_cond_init(&cond, 0);

    pthread_create(&t1, 0, &even, NULL);
    pthread_create(&t2, 0, &odd, NULL);

    pthread_join(t1, 0);
    pthread_join(t2, 0);
    printf("\n");
    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);

    return  0;
}
