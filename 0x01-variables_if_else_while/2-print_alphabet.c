#include <stdio.h>

/**
 * main - Print alphabet in lower case, followed by new line.
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);

}
