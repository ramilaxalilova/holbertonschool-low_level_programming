#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: firt string
 * @src: second dtring
 * @n:  bytes from src
 * Return: @dest
 */


char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';
	return (dest);
}
