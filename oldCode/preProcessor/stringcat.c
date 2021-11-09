// CPP program to illustrate (##) operator 
#include <stdio.h>
#define concat(a, b) a##b
int main(void) 
{ 
   int xy = 30; 
   printf("Name: %s\n",concat("at", "rai")); 
   return 0; 
} 

