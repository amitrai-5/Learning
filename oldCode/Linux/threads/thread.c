#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void* print (void* unused)
{
int *tmp = (int*) unused;
printf("The Value is:%d\n",*tmp);
*tmp = 5;
printf("The Value is:%d\n",*tmp);
return NULL;
}

int main ()
{
int *ptr = (int*) calloc(1,sizeof(int));
*ptr = 4;
pthread_t id1, id2;
printf("The main Value:%d\n",*ptr);
pthread_create(&id1,NULL,&print,ptr);
pthread_create(&id2,NULL,&print,ptr);
pthread_join(id1,NULL);
pthread_join(id2,NULL);
return 0;
}
