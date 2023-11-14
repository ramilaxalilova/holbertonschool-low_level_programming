#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: from
 * @max: to
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
