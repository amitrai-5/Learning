#include<stdio.h>

void bit(int n)
{
int i;
for(i=7;i>=0;i--)
printf("%d ",(n&(1<<i)?1:0));
printf("\n");

}

void range(int n,int l, int r)
{
int num = ((1 << r) - 1) ^ 
              ((1 << (l - 1)) - 1);
     
    // new number which will only have 
    // one or more set bits in the range
    // l to r and nowhere else
    int new_num = n & num;
printf("The Range of Number is:");
bit(new_num);

}
int main()
{
int n,l,r;

printf("Enter the Number/range-left/range-right:");
scanf("%d %d %d",&n,&l,&r);
printf("The entered number is:");
bit(n);
range(n,l,r);
return 0;
}
