#include "header.h"

void printBinary(int number)
{
   int i = 0;
   printf("The binary is :");
   for(i = 7; i >= 0; i--)
   {
      printf("%d ", ((number >> i) & (1)));
   }
   printf("\n");
}

void setBitAtPosition(int number, int position)
{
   number |= (1 << position);
   printBinary(number);
}

void powerOfTwo(int x)
{

   if (x && (!(x & (x - 1))))
   {
      printf("Number is power of 2\n");
      int i = 0;
      int cnt = 0;
      while(!(x & (1 << i)))
      {
         cnt++; 
         i++;
      }
      printf("the number %d is %d times power of 2\n", x, cnt);
   }
   else
   {
      printf("Number is not power of 2\n");
   }
}
