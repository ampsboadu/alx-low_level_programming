#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -create array with chars
 * @size: size of array
 * @c: char to fill array
 * Return: poniter to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	if (size < 1)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
