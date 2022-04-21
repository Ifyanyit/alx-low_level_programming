#include "main.h"

/**
  *_puts - prints astring, followed by a new line, to stdout
  *@str: A pointer to an integer that will be changed
  *Return: void which means our answer is correct.
  */

void _puts(char *str)
{
	int m;

	for (m = 0; str[m]; m++)
	{
		_putchar(str[m]);
	}

	_putchar ('\n');

}
