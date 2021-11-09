#include "header.h"

int main()
{
   int number = 32;
   int pos = 0;
   printf("The given number is:%d \n", number);
   printBinary(number);
   pos = 0;
   setBitAtPosition(number,pos);
   
   powerOfTwo(number);
   return 0;
}
