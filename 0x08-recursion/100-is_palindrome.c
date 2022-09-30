#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - returns the 1 if s is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i,c=0,n;
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]==s[n-i-1])
			c++;
	}
	if(c==i)
		return 1;
	else
		return 0;
}

int main()
{
	char s[1000];

	printf("Enter  the string: ");
	

	if(is_palindrome(s))
		printf("string is palindrome");
	else
		printf("string is not palindrome");
}
