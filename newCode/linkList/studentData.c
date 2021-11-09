#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
   char name[10];
   int class;
   int rollNumber;
}Student;

void createData(Student* st, int size);
void printData(Student* st, int size);


void printData(Student* st, int size)
{
   int i = 0;
   
   printf("Total %d number of students Data is:\n", size);
   for(i=0; i<size; i++)
   {
      printf("Student %d:\n", i+1);
      printf(" Name:%s ", st[i].name);
      printf(" class:%d ", st[i].class);
      printf(" Roll Number:%d\n", st[i].rollNumber);
   }
}

void createData(Student* st, int size)
{  
   int i = 0;
   for(i=0; i<size; i++)
   {
      printf("Enter the name of the Student: ");
      scanf(" %[^\n]s", st[i].name);
      printf("Enter the class number: ");
      scanf("%d", &(st[i].class));
      printf("Enter the roll number: ");
      scanf("%d", &(st[i].rollNumber));
   }
}

int main()
{
   Student *st;
   int size = 0;

   printf("Enter the number of students: ");
   scanf("%d", &size);
   st = (Student*)calloc(size, sizeof(Student));
   createData(st, size);
   printData(st, size);
   return 0;
}
