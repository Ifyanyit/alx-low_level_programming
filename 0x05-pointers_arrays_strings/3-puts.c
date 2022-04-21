#include "main.h"

/**
  *_puts - prints astring, followed by a new line, to stdout
  *@str: A pointer to an integer that will be changed
  *Return: void which means our answer is correct.
  */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;
	for(m = 0; str[m];!= '\0'; m++)
	{
		_putchar(str[m]);
	}

	_putchar('\n');
	return (0);
}
