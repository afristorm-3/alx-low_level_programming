#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet(void)

{
	char lower;

	lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower = lower + 1;
	}

	_putchar('\n');
}
