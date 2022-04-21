#include <unistd.h>

/**
  *_putchar - writes char c to standard output
  *@c: char to print strings
  *Return: onsuccess 1
  *On error -1 is returned
  */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
