#include "main.h"

/**
  *puts_half - prints half of a string, followed by new line
  *@str: A pointer to an integer that will change.
  *Return: void which means answer is correct
  */

void puts_half(char *str)
{
	int i, last;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i-1)/2;

	for(i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
