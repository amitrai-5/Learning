#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int arr[], int size)
{
   int i = 0;
   for(i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

void mergeArray(int arrA[], int arrB[], int sizeA, int sizeB)
{
   int mergeSize = sizeA + sizeB;
   //int *mergeArray = NULL;
   int i = 0, j = 0, k = 0;

   int mergeArray[mergeSize];
//   mergeArray = (int*) malloc( mergeSize * sizeof(int));
  // memset(mergeArray, 0, (mergeSize * sizeof(int)));
   for(i = 0, j = 0, k = 0; (i < sizeA) && (j < sizeB); )     
   {
      if (arrA[i] < arrB[j])
      {
         mergeArray[k] = arrA[i];
         i++;
         k++;
      }
      else if (arrA[i] > arrB[j])
      {
         mergeArray[k] = arrB[j];
         j++;
         k++;
      }
      else if (arrA[i] == arrB[j])
      {
         mergeArray[k] = arrA[i];
         k++;
         i++;
         mergeArray[k] = arrB[j];
         k++;
         j++;
      }
   }
   printf("Out here\n");
   if (i < sizeA)
   {
      for(; i < sizeA; i++, k++)
      {
         mergeArray[k] = arrA[i];
      }
   }
   else if(j < sizeB)
   {
      for(; j < sizeB; j++, k++)
      {
         mergeArray[k] = arrB[j];
      }
   }
   printf("Merged array is: \n");
   printArray(mergeArray, mergeSize);
}
int main()
{
   int arrA[] = {1, 4, 8, 12, 14};
   int arrB[] = {1, 2, 5, 7, 9, 12, 13, 15};
   int sizeA = 0, sizeB = 0;
   
   sizeA = sizeof(arrA)/sizeof(arrA[0]);
   sizeB = sizeof(arrB)/sizeof(arrB[0]);
   printf("Array before merge: \n");
   printArray(arrA, sizeA);
   printArray(arrB, sizeB);
   mergeArray(arrA, arrB, sizeA, sizeB);

   return 0;
}
