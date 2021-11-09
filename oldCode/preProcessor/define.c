#include <stdio.h>
#define temp(x,y) int t = x; x = y; y = t;
#define CONDITION 0 
int main()
{
   int x =5, y =10;
   printf("The values are x: %d y: %d\n",x ,y);
   temp (x,y);

   printf("New values are x: %d y: %d\n",x ,y);
#ifndef CONDITION
   printf("I am inside the condition compilation\n");
   printf ("This will comiple when condition is defined\n");
#else
   printf("This is else case\n");
#endif
   printf("THis is Just before return\n");
   return 0;
}
