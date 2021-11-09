#include "insertSingleLL.h"
int main()
{
    int data = 0;
    char choice = 0;
    int run = 1;
    printf("Press I: to insert a data\n"
            "Press G: to insert data at given position\n"
            "Press P to print the data\n"
            "Press C to cancel all the operations\n");
    while(run)
    {
       printf("Enter your choice:");
       scanf(" %c", &choice);
       switch(choice)
       {
          case 'i':
             printf("This is Insert case\n");
             printf("Enter the data: ");
             scanf("%d", &data);
             insertElement(data, 0);
             break;

          case 'g':
             printf("Insert data at given position\n");
             printf("Enter the data: ");
             scanf("%d",&data);
             printf("Enter the position: ");
             int pos = 0;
             scanf("%d", &pos);
             if(pos != 0)
             {
               insertElement(data, pos);
             }
             else
             {
               printf("Wrong position, please enter correct position\n");
             }
             break;

          case 'p':
             printf("This is print case\n");
             printElementList();
             break;

          case 'q':
             printf("Existing....\n");
             run = 0;
             break;

          default:
             printf("Please enter the correct option or press 'q' to quit\n");
       }
    }
    return 0;
 }
