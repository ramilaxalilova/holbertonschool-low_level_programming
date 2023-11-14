#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
