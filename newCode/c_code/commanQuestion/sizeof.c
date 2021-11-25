#include <stdio.h>

#define size_of(i) (char*)(&i+1) - (char*)(&i)
int main()
{
   int i = 10;
   printf("The sizeof int is:%d\n", sizeof(i));
   printf("The sizeof my size is:%d\n", size_of(i));
   return 0;
}
