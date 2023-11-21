#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns index of first element
 * @array: array
 * @size: size of array
 * @cmp: is a pointer to the function
 * Return: 0 if false, 1 if true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
