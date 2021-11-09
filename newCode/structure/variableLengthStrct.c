#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   int age;
   int class;
   float marks;
   char name[0];
}Student;


int main()
{
   Student st;
   strcpy(st.name, "Amit Rai");
   st.age = 28;
   st.class = 12;
   st.marks = 78;
   st.marks = 78;
   printf("Name:%s\n", st.name);
   printf("Name Length:%d\n", strlen(st.name));
   printf("Name:%c\n", st.name[3]);
   return 0;
}
