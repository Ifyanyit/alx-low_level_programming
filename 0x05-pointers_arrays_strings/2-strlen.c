#include "main.h"

/**
 *_strlen - function that returns the lenght of a string.
 *@s: A pointer to an int that changed/ updated
 *
 *Return: void that means our answer is correct.
 */

int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
