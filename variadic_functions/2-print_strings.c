#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string
 * @separator: separator of dtring
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *current_string = va_arg(args, const char *);

		if (current_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_string);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
