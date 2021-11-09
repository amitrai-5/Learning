#include<stdio.h>

int range (int n, int start, int end)
{
//	for(;start<=end;start++)
//	n = (n|1<<start);
	n |=((1<<(end+1)) - (1<<start));
	return n;

}


int main()
{
int n = 16;
int start = 1;
int end = 3;
int new_n = range (n,start,end);
printf("The Number after setting range is:%d\n",new_n);
return 0;
}
