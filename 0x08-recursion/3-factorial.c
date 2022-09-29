#include "main.h"

/**
 * factorial - a function that returns the
 * factorial of *n
 *
 * @n: positive number
 *
 * Return: factorial of @n
 */

int factorial(int n)
{
	if (n < 0)            /* error -1 if number is negative */
		return (-1);
	else if  (n == 0)    /* return factorial of 0 = 1 */
		return (1);
	else                /* return factorial of n if its not less or equal to 0 */
		return (n * factorial(n - 1));
}
