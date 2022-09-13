#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet , in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char lower;

	int i;

	i = 0;

	while (i < 10)
	{
		lower = 'a';
		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		i++;
	}
}
