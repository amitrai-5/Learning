#include <stdio.h>
#include <string.h>
int main()
{
char dst[20];
char src[] = "Amit Rai\n";
strncpy(dst, src, sizeof (src));

printf("dst: %s",dst);
memset(dst, 0, sizeof (dst));
printf("dst: %s\n",dst);
return 0;
}
