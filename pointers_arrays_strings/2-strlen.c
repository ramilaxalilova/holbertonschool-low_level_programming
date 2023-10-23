#include "main.h"

/**
 * _strlen - count string length
 * @s: string which counted
 * Return: count
 */

int _strlen(char *s)
{
	int c;

	for (c=0; s[c] != '\0'; c++);
	

	return (c);

}
