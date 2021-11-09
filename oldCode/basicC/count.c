# include <stdio.h>
# include <stdlib.h>
//# define NO_OF_CHARS 256
# define NO_OF_CHARS 26
 
/* Fills count array with frequency of characters */
void fillCharCounts(char *str, int *count)
{
   int i;
   for (i = 0; *(str+i);  i++) {
      //count[*(str+i)]++;
	if (*(str+i) != ' ')
      count[(*(str+i))-'a']++;
}
}
 
/* Print duplicates present in the passed string */
void printDups(char *str)
{
  // Create an array of size 256 and fill count of every character in it
  int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
  fillCharCounts(str, count);
 
  // Print characters having count more than 0
  int i;
  for (i = 0; i < NO_OF_CHARS; i++) {
    if(count[i] > 1)
        printf("%c ,  count = %d \n", (i+'a'),  count[i]);
 }
  free(count);
}
 
/* Driver program to test to pront printDups*/
int main()
{
    char str[] = "dddaaeedd";
    printDups(str);
    getchar();
    return 0;
}
