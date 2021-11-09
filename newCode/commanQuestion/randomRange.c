#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static int rangCounterA;
static int rangCounterB;
static int rangCounterC;
static int totalCount;


float rangFun()
{
   totalCount++;
   float tmpRange = 0;
   float ret = 0;
   int range = (rand() % 3) + 1;
   switch(range)
   {
   case 1:
      //printf("Case .1\n");
      tmpRange =  (rangCounterA/totalCount) * 100;
      if(tmpRange <= 20)
      {
         ret = 3.8;
         rangCounterA++;
         break;
      }
   case 2:
      //printf("Case .2\n");
      tmpRange =  (rangCounterB/totalCount) * 100;
      if((tmpRange <= 70) || (tmpRange > 20))
      {
         rangCounterB++;
         ret = 4.2;
         break;
      }
   case 3:
      //printf("Case .3\n");
      tmpRange =  (rangCounterA/totalCount) * 100;
      if((tmpRange <= 100) || (tmpRange > 70))
      {
         rangCounterC++;
         ret = 4.8;
         break;
      }
   default:
      printf("Not a valid number\n");
   }

   return ret;     
}

int main()
{
   int i = 0;
   for(i = 0; i <= 25; i++)
    printf(" number: %.2f ",rangFun());
   printf("\n");

}
