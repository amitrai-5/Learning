#include <stdio.h>
unsigned long int
strtoul(const char *nptr, char **endptr, int base)
{
   register unsigned long int val;
   register signed char chr;

   val = 0;
   while (1) {
      chr = *nptr++ - '0';
      if (chr < 0 || chr > 9)
         break;
      val = (val * 10) + chr;
   }
   if (endptr)
      *endptr = (char *) nptr - 1;
   return val;
}

int main(int argc, char* argv[])
{
   int enable;
  
  if ( (strcmp(argv[1],"1") == 0) || (strcmp(argv[1],"0") == 0))
   {
      enable = strtoul(argv[1], NULL, 0);
      printf("The value of enable is:%d\n",enable);
   }
   else
      printf("Enter the correct formate\n");
/*   enable = strtoul("0", NULL, 0);
   printf("The value of disable is:%d\n",enable);*/
   return 0;
}
