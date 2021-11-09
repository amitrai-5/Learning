#include <stdio.h>
#include <string.h>

int getSingleElem(int arr[], int size)
{
   int i;
   int singleElement = arr[0];
   for(i = 1; i < size; i++)
   {
      singleElement = singleElement ^ arr[i];
      printf("singleElement:%d\n", singleElement);
   }
   return singleElement;
}

int main()
{
   int arr[] = {2,3,4,5,5,4,3,2,1};
   int size = 0;
   size = sizeof(arr)/sizeof(arr[0]);
   int single = getSingleElem(arr, size);
   printf("AR: the single element is:%d\n", single);
   return 0;

}
