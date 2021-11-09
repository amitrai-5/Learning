#include<stdio.h>
#include <stdlib.h>
typedef struct node {
int a;
char b;

} Node;
int main()
{
//char * arr[8]; // array of pointers.
//char (*arr)[8]; // pointer of an array.
int i;
/*char *p0,*p1,*p2,*p3,*p4,*p5,*p6,*p7;
p0 = "amit";
p1 = "Lucky";
p2 ="at";
p3 = "pt";
p4 = "jt";
p5 = "lkp";
p6 = "ajt";
p7 = "pandit";
char *arr[8] = { p0,p1,p2,p3,p4,p5,p6,p7};
*/
char* arr[5];
arr[0] = "amit";
arr[1] = "kumar";
arr[2] = "rai";
arr[3] = "lucky";
arr[4] = "pandit";
for(i=0 ; i<5 ; i++)
	printf("the string is:%s\n",arr[i]);
/*Node* arr[5] = {NULL};
int i;
arr[0] = (Node*)malloc (1*sizeof(Node));
arr[1] = (Node*)malloc (1*sizeof(Node));
arr[2] = (Node*)malloc (1*sizeof(Node));
arr [3]  = (Node*)malloc (1*sizeof(Node));
arr[4] = (Node*)malloc (1*sizeof(Node));

arr[0]->a = 10;
arr[0]->b = 'a';
arr[1]->a = 20;
arr[1]->b = 'b';
arr[2]->a = 30;
arr[2]->b = 'c';
arr[3]->a = 40;
arr[3]->b = 'd';
arr[4]->a = 50;
arr[4]->b = 'e';

//Node *arr[5] = {p0,p1,p2,p3,p4};
for (i = 0; i<5 ; i++)
	printf("the elements are: a = %d b = %c\n",arr[i]->a,arr[i]->b);
*/
return 0;
}
