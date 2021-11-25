#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
   pid_t childProcessId;
   char *binaryPath = "/bin/ls";
   char *args[] = {binaryPath, "-lh", "/home", NULL};
   printf("Parent process before fork\n");
   childProcessId = fork();
   if (childProcessId == 0)
   {
      printf("CHILD: This is child process\n");
      printf("CHILD: ppid:%d\n", getppid());
      printf("CHILD: pid:%d\n", getpid());
//      execv(binaryPath, args); 
   }
   else
   {
      printf("PARENT: This is parent process, PID: %d\n", getpid());
      printf("PARENT: The child process PID: %d\n", childProcessId);
      wait(NULL);
   }
   printf("This is comman call\n");
   return 0;
}
