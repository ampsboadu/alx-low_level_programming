#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat -concat two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concat str
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len1++, i++;

	while (*(s2 + j))
		len2++, j++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		retrun (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (j <= len2)
	{
		concat[i] = s2[j];
		j++, i++;
	}

	return (concat);
}
