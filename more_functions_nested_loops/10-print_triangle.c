#include "main.h"

/**
 * print_triangle - prints left triangle
 * @size: size of triangl
 */

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = size - row; col > 0; col--)
			{
				_putchar(' ');
			}
			for (col = 0; col < row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');

			if (row == col)
				continue;	
		}
	}

	_putchar('\n');
}
