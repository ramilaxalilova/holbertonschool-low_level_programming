#include "main.h"

/**
 * print_triangle - prints left triangle
 * @size: size of triangl
 */

void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = size - row; col > 1; col--)
			{
				_putchar(32);
			}
			for (col = 0; col <= row; col++)
			{
				_putchar(35);
			}
			_putchar('\n');

		}

	}
}
