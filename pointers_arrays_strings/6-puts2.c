#include "main.h"

/**
 * puts2 - puts each other character
 * @str: string
 */




void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
