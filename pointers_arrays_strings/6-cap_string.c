#include "main.h"

/**
 * *cap_string - string
 * @s: string
 * Return: pointer
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[0] -= 32;


		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || i == 0)
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
