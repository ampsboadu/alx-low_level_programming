#include "main.h"

/**
 * _memcpy -copy bytes from src to dest
 * @dest: destination pointer
 * @src: source to be copied
 * @n: number of bytes
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len = n;

	if (len > 0)
	{
		int i;

		for (i = 0; i < len; i++)
			dest[i] = src[i];
	}

	return (dest);
}
