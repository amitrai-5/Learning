#include <stdio.h>


int main()
{
   // pointer to a constant integer
   //const int *p;
   int *p;
   int i =20;
   
   p = &i;
   //*p = 10;
   printf("The value of i is:%d\n", *p);
   return 0;

}
