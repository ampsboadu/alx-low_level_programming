#include <stdlib.h>
#include "main.h"

/**
 * _strlen -get len of string
 * @str: string
 * Return: len of str
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat -concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to concat str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
