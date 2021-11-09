#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
	// Start from leftmost and rightmost corners of str
	int l = 0;
	int h = strlen(str) - 1;

	// Keep comparing characters while they are same
	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is Not Palindrome\n", str);
			return;
		}
	}
	printf("%s is palindrome\n", str);
}
void wordPalindrome(char str[])
{
	int j = 0;
        char arr[10] = {0};
    	int i;
    while(str[j])
    {
	memset(arr, 0, 10);
	i = 0;
        while(str[j] != ' ' && str[j] != '\0')
        {
            arr[i] = str[j];
            i++;
	    j++;
        }
        arr[i] = '\0';
	if (str[j] != '\0')
	j++;
        isPalindrome(arr);
    }
}
// Driver program to test above function
int main()
{
    char str[20];
    printf("Enter the String:");
    scanf("%[^\n]s",str);
    wordPalindrome(str);
	return 0;
}

