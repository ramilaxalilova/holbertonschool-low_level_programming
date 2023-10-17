#include "main.h"



/**
 * print_sign - checks numbers.
 * @n: number to be checked
 *
 * Return: 1 if character is greater zero,0 is zero, -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

