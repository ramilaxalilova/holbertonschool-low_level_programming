#include "main.h"

/**
 * puts2 - puts each other character
 * @str: string
 */




void puts2(char *str)
{
	int n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
