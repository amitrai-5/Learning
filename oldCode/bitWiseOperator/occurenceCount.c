#include <stdio.h>
#include <string.h>
void printFrequancy(int arr[],int n) 
{ 
    int i =0, j=0; 
    for (j =0; j<n; j++) 
        arr[j] = arr[j]-1; 
    for (i=0; i<n; i++)
    { 
        arr[arr[i]%n] = arr[arr[i]%n] + n; 
    }
    for (i =0; i<n; i++) 
      printf("Occurence of %d is:%d\n", i+1,  arr[i]/n);
   printf("\n");
} 
void countOccurence(int arr[], int size)
{
   int dupArr[6] = {0};
   int cnt = 0, i = 0, index = 0;
   for(i = 0; i < size; i++)
   {
      cnt = 0;
      index = arr[i];
      cnt = dupArr[index];
      dupArr[index] = cnt+1;
   }
   for (i = 0; i <= 5; i++)
   {
      printf("Occurence of %d is %d\n", i, dupArr[i]);
   }
}

void print(int arr[], int size)
{
   int i = 0;
   printf("Array Elements are: ");
   for(i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
int main()
{
   int arr[] = {1,2,4,3,5,2,2,1,1,5};
//   int arr[] = {1,2, 3, 3, 2, 5};
   int size = 0;
   size = sizeof(arr)/sizeof(arr[0]);
   print(arr, size);
//   countOccurence(arr, size);
   printFrequancy(arr, size);
   return 0;
}
