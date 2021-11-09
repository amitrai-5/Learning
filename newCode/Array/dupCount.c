#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findMaxElement(char arr[], int size)
{
   int i = 0;
   int temp = 0;
   int max = 0;

   for(i = 0; i <= size -2; i++)
   {
      if(max < arr[i])
         max = arr[i];
   }
   return max;
}
void countDup(char arr[], int size)
{
   int max = findMaxElement(arr, size);
   printf("The max element is:%d\n", max);
   int *temp = NULL;
   int i = 0;
   temp = (int*) malloc(sizeof(int)*max);
   for(i = 0; i <= size-1; i++)
   {
      temp[arr[i]] = temp[arr[i]] + 1;
   }
   printf("Arrays is:%s\n", arr);
   for(i = 0; i <= max -1; i++)
   {
      if(temp[i] != 0)
         printf("%c %d\n", i, temp[i]);
   }
}

int main(int argc, char* argv[])
{
   char arr[] = "tutorialspoint";
   int size = strlen(arr);
   countDup(arr, size);
   return 0;
}
