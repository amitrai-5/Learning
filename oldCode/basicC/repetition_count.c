#include<stdio.h>

#define NO_OF_ALPHABET 26

int main()
{
char str[] = "dddaacceaa";

print_repeat(str);
return 0;
}

void print_repeat(char* input)
{
int buff[NO_OF_ALPHABET] = {0} ;

int i=0, cnt = 0;

for(i=0;*(input+i) != '\0'; i++)
{
	buff[input[i] - 'a']++;
}
printf("The character and it's repetition is: ");
for(i=0; *(input+i) != '\0'; ){
if(buff[input[i] - 'a'] !=0) {
printf("%c , %d\n",(*(input+i)), buff[input[i] - 'a']);
i += buff[input[i]- 'a'];
}
}
printf("\n");
}
