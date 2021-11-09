#include <stdio.h>

// 1, 1, 2, 3, 5, 8
int main()
{
   int arr[15] = {0};
   int i = 0;
   arr[0] = 1;
   arr[1] = 1;
   int size = sizeof(arr)/sizeof(arr[0]);
   for(i = 2; i < size; i++)
   {
      arr[i] = arr[i-1] + arr[i-2];
   }
   printf("The fibbonaci series is: ");
   for(i = 0; i < size; i++)
   {
      printf("%d, ", arr[i]);
   }
   printf("\n");
   return 0;
}
