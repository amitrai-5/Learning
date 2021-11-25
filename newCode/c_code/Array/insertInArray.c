#include <stdio.h>
#include <stdlib.h>


void printArray(int arr[], int size)
{
   int i = 0;
   for(i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
void insertInMiddle(int arr[], int size, int number, int insertIndex)
{
   int i = insertIndex;
   int temp = 0;
   int cNumber = number;

   for(; i < size; i++)
   {
      temp = arr[i];
      arr[i] = number;
      number = temp;
   }

   printf("Array after inserting %d\n", cNumber);
   printArray(arr, size);
}


int main()
{
   int arr[10] = {1,2,3,4,5,6};
   int size = sizeof(arr)/sizeof(arr[0]);
   printf("Original Array:\n");
   printArray(arr, size);
   int number = 10;
   insertInMiddle(arr, size, number, 2);
   number = 20;
   insertInMiddle(arr, size, number, 3);
   number = 100;
   insertInMiddle(arr, size, number, 0);
   number = 1;
   insertInMiddle(arr, size, number, 9);
   return 0;
}

