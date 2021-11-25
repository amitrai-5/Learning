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
void deletElement(int arr[], int size, int number)
{
   int i = 0;
   for(i = 0; i < size; i++)
   {
      if (arr[i] == number)
         break;
   }
   if (i == size)
   {
      printf("Element %d is not available in array\n", number);
      return;
   }
   for(i; i < size - 1; i++)
   {
      arr[i] = arr[i+1];
   }
   arr[i] = 0;
}
int main()
{
   int arr[] = {3, 8, 12, 5, 6};
   int size = 0;
   int element = 3;

   size = sizeof(arr)/sizeof(arr[0]);
   printf("Before delete: ");
   printArray(arr, size);
   printf("Size: %d\n", size);
   printf("The number want to delet :%d\n", element);
   deletElement(arr, size, element);
   printf("After delete: ");
   printArray(arr, size);
   size = sizeof(arr)/sizeof(arr[0]);
   printf("Size: %d\n", size);
   return 0;
}
