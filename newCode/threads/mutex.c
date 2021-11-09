#include <stdio.h>
#include <pthread.h>
pthread_mutex_t lock /*= PTHREAD_MUTEX_INITIALIZER*/;
int counter;

void* threadFunction(void* param)
{
   printf("The thread function..%u\n", pthread_self());
}


int main()
{
   pthread_t tid1, tid2;
   if(pthread_mutex_init(&lock, NULL) != 0)
   {
      fprintf(stderr, "not able to initialize the mutex\n");
      return -1;
   }
   if(pthread_create(&tid1, NULL, &threadFunction, NULL) != 0)
   {
      fprintf(stderr, "Not able to create thread 1\n");
   }

   if(pthread_create(&tid2, NULL, &threadFunction, NULL) != 0)
   {
      fprintf(stderr, "Not able to create thread 2\n");
   }
   if(pthread_join(tid1, NULL) != 0)
   {
      fprintf(stderr, "Not able to join thread 1\n");
   }
   if(pthread_join(tid2, NULL) != 0)
   {
      fprintf(stderr, "Not able to join thread 1\n");
   }
   if(pthread_mutex_destroy(&lock) != 0)
   {
      fprintf(stderr, "Not able to destroy the lock\n");
   }
   return 0;
}
