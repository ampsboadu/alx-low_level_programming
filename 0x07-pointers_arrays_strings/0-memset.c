#include "main.h"

/**
 * _memset -fill memory with bytes of constant
 * @s: pointer to memory
 * @b: constant value
 * @n: number of bytes to fill
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int len = n;

	if (len > 0)
	{
		int i;

		for (i = 0; i < len; i++)
			s[i] = b;
	}

	return (s);
}
