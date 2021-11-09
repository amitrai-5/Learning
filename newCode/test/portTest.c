#include <stdio.h>
#include <stdlib.h>
/* I/P
// {30,63} {43,63} {40,70} {45,75} {40,120}*/
void makeFinalArray(int arr[][2], int row, int lower, int upper)
{
   int i = 0, j = 0;
   int newArr[4][2] = {0};
   for(i = 0; i < row; i++)   
   {
      for(j = 0; j < 2; j++)
      {
         newArr[i][j] = arr[i][j];
      }
   }
}
int main()
{
   int arr[4][2] = { {20,40}, {50,55}, {60,65}, {80,100} };
   int arrNew[2] = {43,63};
   int i = 0, j = 0;
   int r, c, lowerLimit, upperLimit;   

   r = 4;
   c = 2;
   for(i = 0; i < r; i++)
   {
      if( (arr[i][0] <= arrNew[0]) && (arr[i][1] >= arrNew[0]))
      {
         lowerLimit = arr[i][0];
         break;
      }
   }
   if( i == r)
      lowerLimit = arrNew[0];

   for(i = 0; i < r; i++)
   {
      if( (arr[i][0] <= arrNew[1]) && (arr[i][1] >= arrNew[1]))
      {
         upperLimit = arr[i][1];
         break;
      }
   }
   if( i == r)
      upperLimit = arrNew[1];
   printf("lowerLimit:%d upperLimit:%d\n", lowerLimit, upperLimit);
   makeFinalArray(arr, r, lowerLimit, upperLimit);

}
