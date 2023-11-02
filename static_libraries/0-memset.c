#include "main.h"


/**
 * _memset - function fills the first n bytes s with the constant byte b
 * @s: memory area
y* @n: bytes of memory
 * @b: constant bytes
 * Return: s
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
