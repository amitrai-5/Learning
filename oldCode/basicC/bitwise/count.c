#include<stdio.h>

void find_count(int , int);
int main()
{
int a = 10;
int b = 20;

int i , cnt =0;
find_count(10,20);
/*for (i = 0; i<32; i++) {
	if ((a & (1 << i)) != (b & (1 << i)))
		cnt ++;
}
printf("The number is:%d\n",cnt);*/
return 0;

}
void find_count(int a, int b)
{

int c = a ^ b ;

int d = c ^ a ; 

printf("the value of a is:%d\n",d);

}
