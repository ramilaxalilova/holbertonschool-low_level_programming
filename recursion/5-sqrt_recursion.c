#include "main.h"

int _sqrt_rec(int n, int a);
/**
 * _sqrt_recursion - natural square root of a number
 * @n: numbar that  natural square root
 * Return: square root of a number.
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else
		return (_sqrt_rec(n, 0));
}

/**
 * _sqrt_rec - gives root in recursion
 * @n: natural square root
 * @a: integer under root
 * Return: square root of number
 */

int _sqrt_rec(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (_sqrt_rec(n, a + 1));
}
