#include <stdio.h>

void printArray(int *arr, int size)
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
   int arr[] = {10, 12, 14, 7, 8};
   int size = sizeof(arr)/sizeof(arr[0]);

   printArray(arr, size);
   
   return 0;
}
