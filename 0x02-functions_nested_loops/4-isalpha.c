#include"main.h"
/**
 * _isalpha - checks if a characteris a letter
 * both lowercase or uppercase
 * @c: takes input from other functions
 * Return: return 1 is c if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
