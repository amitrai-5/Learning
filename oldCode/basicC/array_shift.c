#include<stdio.h>


int main()
{

int arr[] = {1,2,3,4,5,6,7};
int size = sizeof(arr)/sizeof(int);
int diff = 2;
int i;
for(i =0 ;i < (size-diff); i++)
	arr[i] = arr[i+2];
arr[i] = 1;
arr[i+1] = 2 ;

for(i=0;i<size;i++)
	printf("%d ",arr[i]);
printf("\n");
return 0;
}
