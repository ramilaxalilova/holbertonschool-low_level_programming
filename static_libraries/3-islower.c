#include "main.h"

/**
 *  _islower - checks for lowercase character.
 *  @c: The caracter to be checked.
 *
 *  Return: 1if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
