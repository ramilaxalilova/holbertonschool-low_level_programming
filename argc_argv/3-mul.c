#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 *@argc: count of parameters
 *@argv: array of parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	return (0);
}
