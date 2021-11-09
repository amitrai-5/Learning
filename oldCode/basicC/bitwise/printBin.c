#include<stdio.h>

int main()
{
int n,i,temp;
printf("Enter the Nuber:");
scanf("%d",&n);
printf("the Binary of number %d is:",n);
//bin(n);
for(i=31; i>=0; i--)
{
	temp = (n & (1<<i) );
	printf("%d ",temp%2);
}
printf("\n");

}

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n/2);

    /* step 2 */
    printf("%d", n % 2);
}
