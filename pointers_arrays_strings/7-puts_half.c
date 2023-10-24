#include "main.h"


/**
 * puts_half - prints half of a string
 * @str: string that will be reversed
 */

void puts_half(char *str)
{
	int i, len, newlen;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		newlen = len / 2;
	else
		newlen = (len + 1) / 2;

	for (i = newlen; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
