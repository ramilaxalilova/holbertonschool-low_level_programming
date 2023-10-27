#include "main.h"

/**
 * *cap_string - string
 * @s: string
 * Return: pointer
 */

char *cap_string(char *s)
{
	int i;

 	char a[] = " \t\n,.!?\"(){}";	
	
	i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;

		if (s[i] == a[i])
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
