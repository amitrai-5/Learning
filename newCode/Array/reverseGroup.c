#include <stdio.h>

void printArray(int arr[], int size);
void reverseArrayInGroup(int arr[], int size, int group)
{
   int start = 0;
   int end = start + group;
   int i = 0, j = 0;
   for(i = 0, j = i + (group - 1); i < size; i+=group)
   {
      start = i;
      end = i + (group - 1);
      if (end > size - 1)
      {
         end = size - 1;
      }
      while(start < end)
      {
         int tmp = arr[start];
         arr[start] = arr[end];
         arr[end] = tmp;
         start++;
         end--;
      }
   }
}
void printArray(int arr[], int size)
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
   //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int arr[] = {5, 6, 8, 9};
   int size = 0;
   int group = 7;

   size = sizeof(arr)/sizeof(arr[0]);
   printArray(arr, size);
   reverseArrayInGroup(arr, size, group);
   printArray(arr, size);
}
