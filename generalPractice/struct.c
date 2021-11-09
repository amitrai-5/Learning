#include <stdio.h> 
struct test { 
   unsigned int x; 
   int y :21; 
   unsigned int z; 
}; 
int main() 
{ 
   printf("%d\n", sizeof(struct test)); 
   return 0; 
} 







