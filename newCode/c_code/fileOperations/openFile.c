#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
   FILE* fp;
   char arr[100] = {0};
   char ch;
   char *p;

   fp = fopen(argv[1], "r");
   if(fp == NULL)
   {
      fprintf(stderr,"Can not open the file\n");
      return -1;
   }
   printf("The File containt is: ");
   while((ch = fgetc(fp)) != EOF)
   {
      p = (char*) realloc(p, sizeof(char));
      printf("%c", ch);
   }
   printf("\n");
   printf("%s\n",*p);
   free(p);
   return 0;
}
