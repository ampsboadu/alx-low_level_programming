#include "main.h"
#include <string.h>

/**
 * _strncat -concats two strings
 * @dest: destination string
 * @src: source string
 * @n: buffer size of source
 * Return: destination string
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = 0;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[deslen] = '\0';

	return (dest);
}
