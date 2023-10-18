#include "main.h"

/**
 * _abs - calculate absolute value of integer.
 * @n : the integer to be converted
 *
 * Return: absolute value of integer
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);

}
