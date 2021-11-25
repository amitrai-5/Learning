#include <stdio.h>
#include <stdlib.h>

int main()
{
 char *cptr;
 int  *iptr;

 cptr = malloc(sizeof(int) + 1);
 iptr = (int *) ++cptr;

 *cptr = 42;
 printf("%d", *iptr);
   return 0;
}
