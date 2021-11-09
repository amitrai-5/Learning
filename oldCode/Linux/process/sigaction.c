#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void handlerFunction(int signal)
{
   printf("This is ctrl+c press\n");
   printf("I am not responding to you\n");
}

int main()
{
   struct sigaction act;
   memset(&act, 0, sizeof(act));
   act.sa_handler = &handlerFunction;

   while(1)
   {
      sigaction(SIGINT, &act, 0);
   }
   return 0;
}
