#include<stdio.h>

void print (int* arr, int size)
{
	int i=0;
	for(i=0; i<size; i++)
		printf("%d ",arr[i]);
	printf("\n");

}
void swap (int* a, int* b)
{
	int temp;
	temp = *a;
	*a =  *b;
	*b = temp;

}
void segrigateEvenOdd(int arr[], int size)
{
	int i,j;
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 == 0)
		 continue;
		else
		{
			for(j = i+1; j<size; j++)
			{
				if(arr[j]%2 == 0){ // Even Value
				swap(&arr[i],&arr[j]);
				break;}
			}
		}
	
	}
//	print(arr,size);

}

int main()
{
	int arr[] = {12, 34, 45, 9, 8, 90, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	print(arr,size);
	segrigateEvenOdd(arr,size);
	print(arr,size);
	return 0;
}
