#include "main.h"

/**
 * leet -exchange special chars with code
 * @s: input string
 * Return: string
 */

char *leet(char *s)
{
	int c[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			if (s[j] == c[i])
				s[j] = n[i];
		}
		j++;
	}

	return (s);
}
