#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct element
{
   int data;
   struct element *next;
}Element;
void printElementList();
void insertElement(int data, int pos);
