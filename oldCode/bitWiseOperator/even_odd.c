#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print (int arr[], int size);
void evenOddSeperate (int arr[], int size)
{
   int i =0, j=0, n=0;
   for(; i< size; i++)
   {
      // if the element is odd
      if(arr[i] & 1)
      {
         for(j = i+1; j <size; j++)
         {
            // if the next element is even, toggle the number
            if(!(arr[j] & 1))
            {
               n = arr[i];
               arr[i] = arr[j];
               arr[j] = n;
               break;
            }
         }
      }
   }
}

void print (int arr[], int size)
{
   int i =0;
   for(; i < size; i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
}

int main ()
{
   int arr[] = {12, 34, 45, 9, 8, 90, 3};
   int size = 0;
   size = sizeof (arr)/sizeof (arr[0]);
   printf("Before Seperation: ");
   print(arr, size);
   evenOddSeperate(arr, size);
   printf("After Seperation : ");
   print(arr, size);
   return 0;
}
