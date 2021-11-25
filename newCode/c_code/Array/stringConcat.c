#include<stdio.h>
#include<string.h>
#include<stdlib.h>

static char *finalArr;

void stringConcat(char arr[], int len)
{
   finalArr = (char*) realloc(finalArr, len*sizeof(char));
   strcat(finalArr, arr);
}

int main(int argc, char* argv[])
{
   int i = 0;
   char* arr[] =  {"Amit", "Kumar", "Rai"};
   for(i = 0; i < 3; i++)
   {
      int len = strlen(arr[i]);
      stringConcat(arr[i], len);
   }
   printf("Final Array is:%s\n", finalArr);
   free(finalArr);
   return 0;
}
