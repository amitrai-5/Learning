#include<stdio.h>
#include<stdlib.h>

typedef struct element
{
   int data;
   struct element *next;
}Element;

Element *head;

void swapElements(Element *prev1, Element *current1, Element *prev2, Element *current2)
{
   Element *tmp;
   if(prev1 == NULL) // this is first Element of list.
   {
      head = current2; // update the head with second element
   }
   else
   {
      prev1->next = current2;
   }
   tmp = current2->next;
   if(current1 == prev2) // this is the case of adjacent elements.
   {
      current2->next = current1;
   }
   else // this will hit, when elements are far from each other.
   {
      current2->next = current1->next;
      prev2->next = current1;
   }
   current1->next = tmp;
}
void shortElement(void)
{
   Element *tmp = head;
   if(tmp == NULL)
      printf("List is empty, cann't do any operation\n");
   else
   {

   }
}
void printElement(void)
{
   Element *tmp = head;
   if(tmp == NULL)
   {
      printf("LinkList is Empty\n");
   }
   else
   {
      while(tmp != NULL)
      {
         printf("%d ", tmp->data);
         tmp = tmp->next;
      }
      printf("\n");
   }
}
Element* creatElement(int data)
{
   Element* tmp = (Element*) malloc(1*sizeof(Element));
   tmp->data = data;
   tmp->next = NULL;
   return tmp;
}
void insertElement(int data)
{
   Element *tmp = head;
   Element *newElement = creatElement(data);
   if(tmp == NULL)
   {
      head = newElement;
   }
   else
   {
      while(tmp->next != NULL)
      {
         tmp = tmp->next;
      }
      tmp->next = newElement;
   }
}
int main()
{
   //int arr[] = {2,1,4,3,10,0};
   int arr[] = {1,3,2,4,5};
   int size = sizeof(arr)/sizeof(int);
   int i = 0;
   Element *tmp;
   for(i = 0; i < size; i++)
   {
      insertElement(arr[i]);
   }
   printElement();
   Element *p1,*c1,*p2, *c2;
   tmp = head;
   p1 = tmp;
   c1 = tmp->next;
   p2 = c1;
   c2 = p2->next;
   printf("Swap elements: %d , %d\n", c1->data, c2->data);
   swapElements(p1, c1, p2, c2);
   printElement();
   return 0;
}
