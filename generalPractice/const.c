#include <stdio.h>


int main()
{
   const int a = 10;
   int *ptr = (int*)&a;
   *ptr = 20;
   printf("The value is :%d\n", a);
   return 0;
}
