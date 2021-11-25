#include <stdio.h>

void printArray(int arr[], int size)
{
   int i = 0;
   for(i = 0 ; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int i = 0, tmp = 0, size = 0;
   tmp = arr[0];
   size = sizeof(arr)/sizeof(arr[0]);
   printArray(arr, size);
   for(i = 0; i < size - 1; i++)
   {
      arr[i] = arr[i+1];
   }
//   arr[size - 1] = tmp;
   arr[i] = tmp;
   printArray(arr, size);
   return 0;
}
