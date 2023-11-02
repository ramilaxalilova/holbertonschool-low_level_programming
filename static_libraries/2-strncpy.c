#include "main.h"

/**
 *_strncpy - concatenates two strings.
 *@dest: firt string
 *@src: second dtring
 *@n:  bytes from src
 *Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}
	return (dest);
}
