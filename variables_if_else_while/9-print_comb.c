#include <stdio.h>

/**
 * main - prints all combinations single digit numbers
 *
 * Return: Always(success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	if (x < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
