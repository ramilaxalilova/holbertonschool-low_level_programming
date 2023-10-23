#include "main.h"

/**
 * print_rev - prints reverse of string
 * @s: string
 */


void print_rev(char *s)
{
	int n, length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (n = length - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
