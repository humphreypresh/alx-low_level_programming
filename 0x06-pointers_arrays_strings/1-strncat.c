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
	int index = 0, dest_len= 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
