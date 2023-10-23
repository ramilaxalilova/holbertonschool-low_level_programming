#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string
 */


void rev_string(char *s)
{
	char tmp;
	int n, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;


	for (n = 0; n < len / 2; n++)
	{
		tmp = s[n];
		s[n] = s[len1];
		s[len1--] = tmp;

	}
}
