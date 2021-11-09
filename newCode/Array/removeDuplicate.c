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

void removeDuplicate(int arr[], int size)
{
   int res = 1;
   int i = 1;
   
   for(i = 1, res = 1; i < size; i++)
   {
      if (arr[i] != arr[res - 1])
      {
         arr[res] = arr[i];
         res++;
      }
   }

}
int main()
{
   int arr[] = {10, 20, 20, 30, 30, 30, 30};
   int size = 0;

   size = sizeof(arr)/sizeof(arr[0]);
   printf("Given array:");
   printArray(arr, size);

   removeDuplicate(arr, size);
   
   printf("After removal of duplicates: ");
   printArray(arr, size);

}
