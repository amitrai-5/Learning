#include <stdio.h>
#include <string.h>

int main()
{
   char *buff = "AMit kumar rai";
   char *buf = NULL;
   buf = buff +5;
   printf("Amit: buf is:%s\n",buf);
   return 0;
}
