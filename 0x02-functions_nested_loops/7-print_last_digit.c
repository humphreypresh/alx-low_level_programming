#include"main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: takes number input
 * Result: lastDigit
 */
int _print_last_digit(int n)
{
	inut lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}