#include"main.h"

/**
 * _strncat - concatenates two string but adds inputted
 * number of bytes
 *
 * @dest: pointer to destination input
 * @src: pointer to source output
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
