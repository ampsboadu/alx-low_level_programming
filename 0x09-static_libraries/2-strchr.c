#include "main.h"
#define NULL 0

/**
 * _strchr -finds firts occurance of char in str
 * @s: string to search
 * @c: target characer
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
