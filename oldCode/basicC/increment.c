#include<stdio.h>


int main()
{
int x =4;
int y = 0;

y = ++x;
printf("preincrement:\ny: %d\n",y);
printf("x:%d\n",x);

x = 4;
y = x++;
printf("postincrement:\ny:%d\n",y);
printf("x:%d\n",x);

return 0;
}
