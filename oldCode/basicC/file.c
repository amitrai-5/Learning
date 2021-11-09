#include<stdio.h>
#include<string.h>

int main ()
{
FILE* fp;
char buff[100];
fp = fopen("amit.txt","r+");
if (!fp) {
	printf("Not able to Open the file\n");
	return -1;}
fscanf(fp,"%[^\n]s",&buff);
printf("the Valus is:%s\n",buff);
fclose(fp);

return 0;
}
