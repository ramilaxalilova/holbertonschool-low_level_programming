#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator of numbers
 * @n: number will be printed
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(mylist);
	printf("\n");
}
