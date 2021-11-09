#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr ;
ptr  =(int*) malloc(1*sizeof(int));
ptr  =(int*) malloc(1*sizeof(int));

printf("1..Location: %p\n",ptr);
free(ptr);
printf("Location: %p\n",ptr);
//*ptr = 4;
//printf("Location: %d\n",*ptr);

}
