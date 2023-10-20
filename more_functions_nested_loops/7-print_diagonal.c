#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n: The number of diagonal to draw
 * Return: lines
 */

void print_diagonal(int n)
{
	int m;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (j = 0; j < m; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
