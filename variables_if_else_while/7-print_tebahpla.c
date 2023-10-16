#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always Access
 */
int main(void)
{
	char letter = 'z';

	while  (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
