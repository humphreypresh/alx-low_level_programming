#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments
 * passed into it
 *
 * @argc: holds the number of argument passed
 * @argv: array pinter that holds the argument passed
 *
 * Result: Always 0 (Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d/n", m);
	return (0);
}
