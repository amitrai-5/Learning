#include<stdio.h>
#include<stdlib.h>
void fun(int *a)
{
   int i =10;
   a = &i;
}

int main()
{
   int  i = 20;
   int* j = &i ;
   fun(j);
   printf("%d\n",*j);
   return 0;
}
