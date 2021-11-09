#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool Ispangram (char* str)
{
	int cnt = 0;
	char i;
	for (i='a'; i<='z' ; i++)
	{
		if(strchr(str,i)!=NULL)
			cnt++;
		else
			printf("%c\t",i);
	}	
 if (cnt == 26)
	return true;
else
	return false;

}

int main ()
{
char str[] = "cdefghijklmnopqrstuvwxyz";
if (Ispangram(str))
	printf("\n String is Pangram\n");
else
	printf("\nString is Not pangram\n");

return 0;
}
