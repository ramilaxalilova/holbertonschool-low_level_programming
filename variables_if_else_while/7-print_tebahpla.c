#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always Access
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
