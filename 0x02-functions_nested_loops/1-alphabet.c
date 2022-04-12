#include "main.h"

/**
 * print_alphabet - Entry point in lowercase
 *followed by new line.
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}

