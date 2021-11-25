#include <stdio.h>

void swapElement(int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void print(int arr[], int size)
{
   int i = 0;
   printf("The array is :");
   for(i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
void bubbleSort(int arr[], int size)
{
   int i = 0, j = 0, swap = 1;
   for(i = 0; (i < size) && (swap == 1); i++)
   {
      swap = 0;
      for(j = 0; j < (size-i-1); j++)
      {
         if(arr[j] > arr[j+1])
         {
            swapElement(&arr[j], &arr[j+1]);
            swap = 1;
         }
      }
      printf("Eteration:%d\n",i);
      print(arr, size);
   }
}
int main()
{
   //int arr[] = {1,6,2,5,4,11,0,12};
   int arr[] = {1,2,3,4,5,6};
   int size = sizeof(arr)/sizeof(arr[0]);
   printf("Original Array:\n");
   print(arr, size);
   bubbleSort(arr, size);
   printf("Array with sort:\n");
   print(arr, size);
}
