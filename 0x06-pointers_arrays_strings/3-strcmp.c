#include "main.h"

/**
 * _strcmp -compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 when equal or ASCII diff
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;
	int n = 0;

	while (s1[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		if (s1[j] != s2[j]){
			n = s1[j] - s2[j];
			break;
		}
	}

	return (n);
}
