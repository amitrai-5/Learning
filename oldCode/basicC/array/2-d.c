#include<stdio.h>

int* print(int arr[][3],int n)
{
int i=0,j=0;
for (i=0;i<3;i++) {
for(j = 0; j<3; j++) {
	printf("%d ",arr[i][j]);
	arr[i][j]++;}
printf("\n");
}
return arr;
}


int main()
{

int arr[][3] = { {1,2,3},
		{4,5,6},
		{7,8,9}};
int i,j;
arr = print(arr, 3);
for (i=0;i<3;i++) {
for(j = 0; j<3; j++) {
	printf("%d ",arr[i][j]);
//	arr[i][j]++;}
printf("\n");
}

return 0;
}
