#include "main.h"

/**
 * _strspn -return length of values in string
 * @s: string
 * @accept: values
 * Return: length of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (k);
		}
	}

	return (k);
}
