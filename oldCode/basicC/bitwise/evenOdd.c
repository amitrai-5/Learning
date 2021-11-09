#include<stdio.h>

void bin (int n)
{
/*if(n>1)
bin(n/2);

printf("%d ",(n%2));
*/
int i,temp;
for(i=7; i>=0; i--)
{
temp = n & (1<<i) ?1:0;
printf("%d ",temp);
}

}

void toggle(int n)
{
int temp;
temp = n ^ 0xff;
printf("the toggled data is:");
bin(temp);
printf("\n");
printf("does bitwise not:");
temp = ~n;
bin(temp);
printf("\n");
}

void setBit(int n)
{
int temp = n | 0XAA;
printf("Setting all even bits:");
bin(temp);
printf("\n");

}
void evenOdd(int n)
{
int i;
int even;
int odd;
printf("Number in Binnary: ");
bin(n);
printf("\n");
printf("the Even bits are: ");
even = n & 0XAAAAAAAA;
bin(even);
printf("\n");
//toggle(even);
//printf("\n");
setBit(even);


}


int main()
{
int n;
printf("Enter the Number:");
scanf("%d",&n);
evenOdd(n);
return 0;
}
