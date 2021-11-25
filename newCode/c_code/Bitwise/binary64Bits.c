#include <stdio.h>
#define SIZEOFBYTE 8

int main(int argc, char *argv[])
{
   long long number = 0x1BCDEFABCDEFCDEF;
   printf("Size is:%d\n", sizeof(number)*SIZEOFBYTE);
   printf("%llx\n", number);
   printf("%x%x\n", *(((int*)(&number))+1), number);
   return 0;
}
