#include <stdio.h>

/**
 * main -  print the alphabet in lowercase then in uppercase
 *
 * Return: Always(success)
 */
int main(void)
{
	char alphabet = 'a';
	char alphabetU = 'A';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	while (alphabetU <= 'Z')
	{
		putchar (alphabetU);
		alphabetU++;
	}
	putchar ('\n');
	return (0);
}
