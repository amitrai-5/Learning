#include "insertSingleLL.h"

Element* head = NULL;

static Element* creatElementSpace(int data)
{
   Element *tmp = (Element*) malloc(1*sizeof(Element));
   tmp->data = data;
   tmp->next = NULL;
   return tmp;
}
void insertElementLinear(int data)
{
   Element *tmp = creatElementSpace(data);
   Element* headTmp = head;
   if(headTmp == NULL)
   {
      head = tmp;
   }
   else
   {
      while(headTmp->next != NULL)
      {
         headTmp = headTmp->next;
      }
      headTmp->next = tmp;
   }
}

void insertElementAtFirst(int data)
{
   Element *tmp = creatElementSpace(data);
   Element *tmpHead = head;
   if(tmpHead == NULL)
   {
      head = tmp;
   }
   else
   {
      tmp->next = tmpHead;
      head = tmp;
   }
}

void insertElementAtPosition(int data, int pos)
{
   Element *tmp = creatElementSpace(data);
   Element *tmpHead = head;
   pos = pos - 1;
   if(pos == 0)
   {
      tmp->next = head;
      head = tmp;
   }
   else
   {
      while(pos > 1)
      {
         pos = pos -1;
         tmpHead = tmpHead->next;
         if(tmpHead == NULL)
         {
            printf("Insufficient Number of elements\n ");
            break;
         }
      }
      if(tmpHead != NULL)
      {
         tmp->next = tmpHead->next;
         tmpHead->next = tmp;
      }
   }
}

void printElementList()
{
   Element *headTmp = head;
   if(headTmp == NULL)
   {
      printf("This list is empty\n");
   }
   else
   {
      while(headTmp != NULL)
      {
         printf("Data is:%d\n", headTmp->data);
         headTmp = headTmp->next;
      }
   }
}
