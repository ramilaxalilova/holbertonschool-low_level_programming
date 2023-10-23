#include "main.h"

/**
 * swap_int - swaps integers each other
 * @a: integer
 * @b: another integer
 */


void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
