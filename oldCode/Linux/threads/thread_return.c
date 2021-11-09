 #include<stdio.h>
 #include<pthread.h>
 #include<string.h>

 void *print(void *arg)
 {
    char *str = (char *)arg;
    int arr[] = {10,15,25,50,35,45};
    int size = sizeof(arr)/sizeof(arr[0]),sum= 0, index;
    for(index = 0; index < size ; index++)
    {
       sum =sum+arr[index];
    }
    printf("%d\n",sum);
    puts(str);
//    pthread_exit(&sum);
	return (void*)sum;
 }

 int main()
 {
       pthread_t tid1, tid2;
       char *t1="HELLO";
       void *status ;
       pthread_create(&tid1,NULL,&print, (void *)t1);
       pthread_join(tid1,&status);
       printf("Main : %d\n",(int)status);
}
