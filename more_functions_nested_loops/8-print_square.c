#include "main.h"

/**
 * print_square -  prints a square
 * @size: is the size of the square
 * Return: square
 */

void print_square(int size)
{
	int n;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
