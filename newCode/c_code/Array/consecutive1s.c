#include <stdio.h>

int max(int a, int b)
{
   int maxValue = (a > b ? a : b );
   printf("Max Value:%d\n", maxValue);
   return maxValue;
}
// 0, 1, 1, 0, 1, 0
int maxCosecutive1(int arr[], int size)
{
   int i = 0;
   int count = 0;
   int res = 0;
   for(i = 0; i < size; i++)
   {
      if(arr[i] == 1)
      {
         res++;
         count = max(count, res);
      }
      else
      {
         res = 0;
      }
   }
   return count;
}

void printElement(int arr[], int size)
{
   int i = 0;
   for(i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int main()
{
//   int arr[] = {1, 1, 1, 1, 1};
   int arr[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
   int size = 0;
   size = sizeof(arr)/sizeof(arr[0]);
   printElement(arr, size);
   int count = maxCosecutive1(arr, size);
   printf("Max consecutive 1 is:%d\n", count);
   return 0;
}
