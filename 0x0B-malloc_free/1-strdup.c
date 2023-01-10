#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup -return poniter to new memory
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		i++;
		len++;
	}

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		str2[i] = str[i];
		i++;
	}

	return (str2);
}
