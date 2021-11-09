#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
   int age;
   int class;
   char name[];
};

int main()
{
   //struct student *st = malloc(sizeof (struct student));
   struct student st;
   st.age = 20;
   st.class = 12;
   strcpy(st.name,"Priyanshu");
   printf("Age:%d \nClass:%d \nName:%s\n",st.age,st.class,st.name);
   printf("The name first:%c\n",st.name[0]);
   return 0;
}
