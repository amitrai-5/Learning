#include <stdio.h>

void print(int (*p)[4],int size)
{
   int i,j=0;
   printf("The Array is: \n");
   for(i=0; i<size; i++,p++)
   {
      for(j=0; j<4; j++,**p++)
         printf("%d ",*p[j]);
      printf("\n");
   }
}
int main()
{
   int arr[][4]= {{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}
                 };
   int size = 0;
   size = sizeof(arr)/sizeof(arr[0]);
   print(arr,size);
 /*  printf("The Array is: \n");
   print(arr);
   for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
   {
      for(j=0; j<4; j++)
         printf("%d ",arr[i][j]);
      printf("\n");
   }
   printf("\n");
*/

   return 0;
}
