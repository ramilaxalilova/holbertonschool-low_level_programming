#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1, len2, i;

	len1 = len2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (!(n >= len2))
		len2 = n;

	s3 = malloc(sizeof(char) * (len1 + len2) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len1];
	}

	s3[i] = '\0';

	return (s3);
}

