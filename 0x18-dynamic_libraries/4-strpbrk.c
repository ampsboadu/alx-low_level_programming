#include "main.h"
#define NULL 0

/**
 * _strpbrk -searches a string for a set of bytes
 * @s: search string
 * @accept: target
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}

	return (NULL);
}
