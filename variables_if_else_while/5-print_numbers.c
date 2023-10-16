#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Return: Always(success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
