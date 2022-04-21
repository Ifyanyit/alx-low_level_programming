#include "main.h"

/**
  *swap_int - function that swaps the value of two ints
  *@a: A pointer to an int that changes.
  *@b: A pointer to an int that changes.
  *return; 0
  */

void swap_int(int *a, int *b)
{
	int f;
	f = *a;
	*a = *b;
	*b = f;
}
