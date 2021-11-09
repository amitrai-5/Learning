/* sorting array based on pivot.
 * all left elements should be lesser than pivot
 * all right elements should be greater than pivot
*/
#include <stdio.h>

void printArray(int arr[], int size)
{
   int i = 0;
   for(i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

void pivotShort(int arr[], int size, int pivotIndex)
{
   int i = 0, j = -1;
   int pivot = arr[pivotIndex];
   for(i = 0; i < size; i++)
   {
      if(arr[i] < pivot)
      {
         j++;
         swap(&arr[i], &arr[j]);
      }
   }
   swap(&arr[j+1], &arr[pivotIndex]);
}

int main()
{
   int arr[] = {10, 80, 30, 90, 40, 50, 70};
   int size = 0;
   int pivotIndex = 0;

   size = sizeof(arr)/sizeof(arr[0]);
   printf("Before shorted pivot:\n");
   printArray(arr, size);

   pivotIndex = size -1;
   pivotShort(arr, size, pivotIndex);
   printf("After shorted pivot:\n");
   printArray(arr, size);

   return 0;
}
