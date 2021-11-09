#include <stdio.h>
#include <string.h>

/* printing the array which has been passed by main function */
void printFun (int arr[], int size)
{
   int i;
   printf("The array written is: ");
   for (i = 0; i< size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

/* modifying the array  */
void arrayModification (int arr[], int size)
{
   int i;
   for (i = 0; i < size; i++)
   {
      arr[i] = i;
   }

}
/* driver function */
int main()
{
   int arr[] = {1,3,5,2,4};
   int size = sizeof (arr)/sizeof (arr[0]);
   printFun(arr, size);
   arrayModification (arr, size);
   printf("The modified array: ");
   printFun(arr, size);
   return 0;
}
