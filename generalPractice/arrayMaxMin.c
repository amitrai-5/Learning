#include<stdio.h>
// this is to check the behaviour
int main()
{
   //int arr[] = {5,10,1,3,16,8};
   int arr[] = {1,2,3,4,5,6};
   int i,size = 0;
   size = sizeof(arr)/sizeof(arr[0]);
   printf("The Given array is: ");
   for(i=0; i< size; i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
   for (i=0; i < size -1;)
   {
      if(arr[i] < arr[i+1])
      {
         i = i+1;
      }
   }
   printf("The Highest element in array is: %d\n",arr[i]);

   return 0;
}
