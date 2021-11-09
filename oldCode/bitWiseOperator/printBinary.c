#include<stdio.h>

void printBin(int n)
{
   int i = 0;
   int num = 0;
   printf("Binary Representation of number %d is:", n);
   for(i = 8; i >= 0; i--)
   {
      num = !((n&(1<<i))^(1<<i));
//      printf("%d ", n&(1<<i));
      printf("%d ", num);
   }
   printf("\n");
}
void setRange(int num, int start, int end)
{
   num = num | (((1 << end) -1) | ((1 << start) - 1));
   printf("Binary after setting range form %d to %d\n", end, start);
   printBin(num);

}
void setBit(int num, int pos)
{
   num = num | (1 << pos);
   printBin(num);
}
void resetBit(int num, int pos)
{

   num = num & ~(1 << pos);
   printBin(num);
}
// 0 0 0 1 1 0 0 1 0
int main()
{
   int num = 50;
   printBin(num);
//   setRange(num,1,3);
   //setBit(num, 3);
   resetBit(num, 4);
   return 0;
}
