#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

void printArray(int *arr)
{
   int i;
   printf("The array is: ");
   for (i=0; i<SIZE; i++)
      printf("%d ",arr[i]);
   printf("\n");
}

int main()
{
   int *arr,i;
   arr = (int*) malloc (SIZE*sizeof(int));
   for(i = 0; i < SIZE; i++)
   {
      arr[i] = i;
   }
   printArray(arr);
   return 0;
}
