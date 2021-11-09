#include<stdio.h>
#include<stdlib.h>


int main()
{
char (*arr)[2];
int i,j;
arr[0][0] = 'a';
arr[0][1] = 'b';
arr[1][0] = 'c';
arr[1][1] = 'd';

//for(i=0 ; i<2; i++)
//{
//	for(j =0; j <2 ;j++)
	printf("%c",**arr);
	arr++;
	printf("%c",**arr);
	
//}


}
