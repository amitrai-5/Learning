#include<stdio.h>
#include<pthread.h>

struct arg 
{
   char ch;
   int count;
};
void* print (void* arg)
{
   struct arg* val = (struct arg*) arg;
   printf("\nprinting in thread, Tid: %u pid:%d ppid:%d ", pthread_self(), getpid(), getppid());
   while(val->count >0)
   {
      printf("%c ",val->ch);
      val->count --;
   }
   printf("\n");
   return NULL;
}

int main()
{
   pthread_t tid1, tid2;
   struct arg arg1;
   struct arg arg2;
   arg1.ch = 'a';
   arg1.count = 10;
   pthread_create(&tid1, NULL, &print, &arg1);
   pthread_join(tid1, NULL);
   arg2.ch = 'b';
   arg2.count = 10;
   pthread_create(&tid2, NULL, &print, &arg2);
   pthread_join(tid2, NULL);
   printf("This is main function\n");
   return 0;
}
