#include"main.h"
/**
 * main - Entry point
 * Description: prints alphabets 10 times
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}

