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
	int i = 0;
	int deslen = strlen(dest);

	while (src[i] != src[n])
	{
		dest[destlen] = src[i];
		i++;
		deslen++;
	}

	dest[deslen] = '\0';

	return (dest);
}
