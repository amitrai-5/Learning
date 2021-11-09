#include "insertSingleLL.h"

Element* head = NULL;

static Element* creatElementSpace(int data)
{
   Element *tmp = (Element*) malloc(1*sizeof(Element));
   memset(tmp, 0, sizeof(Element));
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

void insertElement(int data, int pos)
{
   Element *tmp = NULL;
   Element *tmpHead = NULL;
   int noSpace = 0;

   if (pos == 0)
   {
      insertElementLinear(data);
   }
   else
   {
      tmp = creatElementSpace(data);
      if ((head == NULL) || (pos == 1))
      {
         tmp->next = head;
         head = tmp;
      }
      else
      {
         pos = pos - 1;
         tmpHead = head;
         while(pos >= 1)
         {
            if (tmpHead != NULL)
            {
               tmpHead = tmpHead->next;
               pos--;
            }
            else
            {     
               noSpace = 1;
               break;
            }     
         }
         if (noSpace)
         {
            printf("Insuffice number of elements\n");
         }
         else
         {
            Element *tmpPosElement = tmpHead->next;
            tmpHead->next = tmp;
            tmp = tmpPosElement;
         }
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
