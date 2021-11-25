#include <stdio.h>
#define TOTAL_BITS 8
void printBinary(int number);
int countConsecutiveSetBits(int number);

int countConsecutiveSetBits(int current)
{
   static int cnt = 0;
   static int prev = 0;

   if(current & prev)
      cnt++;
   prev = current;
   return cnt;
}
void printBinary(int n)
{
   int i = TOTAL_BITS - 1;
   int cnt = 0;
   int tmp = 0;
   printf("The entered number is:%d\n", n);
   for( ; i >= 0; i--)
   {
      tmp = ((n >> i) & 1);
      printf("%d ", tmp);
      cnt = countConsecutiveSetBits(tmp);
   }
   printf("\n");
   printf("The Consecutive Count is:%d\n", cnt);
}

int main(int argc, char* argv[])
{
   int number = 0;
   printf("Enter the number:");
   scanf("%d",&number);
   printBinary(number);
   return 0;
}

