#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generate_random(float l, float r, int count) { //this will generate random number in range l and r
   int i;
   for (i = 0; i < count; i++) {
      float rand_num = ((float)rand()/(float)(RAND_MAX)) * r;
      rand_num = rand_num - l;
      if(rand_num > 0)
      {
         printf("%.2f ", rand_num);
      }
   }
   //printf("%.2f ", l+r);
//      printf("%.2f ", rand_num);
}
int main() 
{
   float lower = 3.4, upper = 5.0, count = 10;
   srand(time(0)); //current time as seed of random number generator
   generate_random(lower, upper, count);
   printf("\n");
   return 0;
}
