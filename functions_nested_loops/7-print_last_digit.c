#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - gives us last digit of number
 * @n: number
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
