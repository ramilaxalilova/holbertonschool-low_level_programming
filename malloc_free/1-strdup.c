#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dublicate string
 * @str: string for dublicate
 * Return: dublicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i;
	int c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
	{
		a[c] = str[c];
	}
	a[c] = '\0';
	return (a);
}
