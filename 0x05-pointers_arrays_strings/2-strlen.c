#include "main.h"

/**
 * _strlen -return len of string
 * @s: string array
 * Return: length of s
 */

int _strlen(char *s)
{
	int i, len;

	if (*s == '\0')
	{
		len = 0;
	}
	else
	{
		for (i = 0; s[i] != 0; i++)
		{
			len = i + 1;
		}
	}

	return (len);
}
