#include "main.h"

/**
 * _strlen - count string length
 * @s: string which counted
 * Return: count
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);

}
