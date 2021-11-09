#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int size = 4;
 
  /* Stored in heap segment like other dynamically allocated things */
  char *str = (char *)malloc(sizeof(char)*size);
/*  *(str+0) = 'G'; 
  *(str+1) = 'f';  
  *(str+2) = 'G';    
  *(str+3) = '\0';  
  *(str+1) = 'n';  No problem: String is now GnG 
*/
strcpy(str,"GNG");
//str = "GNG";
str[1] = 'P';
printf("the string is:%s\n",str);
free(str);
   return 0;
}     
