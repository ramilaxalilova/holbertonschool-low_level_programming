#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char
 * Return: a pointer to the first occurrence
 *
 */



char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
		if (s[i] == c)
			return (s + i);
		else
			return (NULL);
}
