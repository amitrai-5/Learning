#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
   int i =10;
   int status;
   printf("This is main process PID:%d\n",getpid());
   
   int pid = fork();
   if (pid == 0)
   {
      printf("This is child process\n");
      i = 20;
      printf("The value of i is:%d\n",i);
      sleep(10);
      exit(-1);
   }
   waitpid(pid, &status, WNOHANG);
   printf("Parent:The value of i is:%d PID:%d status:%d\n",i,getpid(),WEXITSTATUS(status));
   return 0;
}
