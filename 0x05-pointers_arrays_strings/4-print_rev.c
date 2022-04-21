#include "main.h"

/**
  *print_rev - prints a string, in inverse, followed by newline.
  *@s: A pointer to an integer that will be changed.
  *Return: void which means our answer is correct.
  */
void print_rev(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = -1; i>= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
