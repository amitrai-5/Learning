#include<stdio.h>
#include<pthread.h>

pthread_t tid[2];
unsigned int shared_data = 0;
pthread_mutex_t mutex;
pthread_cond_t condition_var = PTHREAD_COND_INITIALIZER;
unsigned int rc;
int flag;
//prototypes for callback functions
#define lastValue 10
void* PrintEvenNos(void*);
void* PrintOddNos(void*);

int main()
{
    pthread_create(&tid[0],0,&PrintEvenNos,0);
    pthread_create(&tid[1],0,&PrintOddNos,0);
    //sleep(3);

    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);
    return 0;
}

void* PrintEvenNos(void *ptr)
{
  // rc = pthread_mutex_lock(&mutex);
     do
     {
     	 rc = pthread_mutex_lock(&mutex);
//	 printf("locked Even\n");
         if(shared_data%2 == 0)
         {
             printf("Even:%d\n",shared_data);
	     pthread_cond_wait( &condition_var, &mutex );	
             shared_data++;
             rc=pthread_mutex_unlock(&mutex);//if number is odd, do not print, release mutex
         }
         else
         {
             pthread_cond_signal( &condition_var );
             rc=pthread_mutex_unlock(&mutex);//if number is odd, do not print, release mutex
         }
     } while (shared_data <= lastValue);
}

void* PrintOddNos(void* ptr1)
{
	static cnt_lock;
	static cnt_unlock;
    //	rc = pthread_mutex_lock(&mutex);
    do
    {
    	rc = pthread_mutex_lock(&mutex);
	   cnt_lock++;
//	printf("locked Odd\n");
        if(shared_data%2 != 0)
        {
            printf("odd:%d\n",shared_data);
            pthread_cond_wait( &condition_var, &mutex );
            shared_data++;
            rc=pthread_mutex_unlock(&mutex);//if number is odd, do not print, release mutex
        }
        else
        {
            pthread_cond_signal( &condition_var );
            rc = pthread_mutex_unlock(&mutex);//if number is even, do not print, release mutex
      		cnt_unlock++;
        }
    } while (shared_data <= lastValue);
    printf("the values of lock:%d and Unlock:%d :\n",cnt_lock, cnt_unlock);
}
