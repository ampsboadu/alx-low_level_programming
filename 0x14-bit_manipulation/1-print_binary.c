#include <stdio.h>
#include "main.h"

/**
 * print_binary -converts unsigned int to binary
 * @n: int to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int copy = n, mask = 1;
	int len = 0;

	while (copy > 0)
	{
		len++;
		copy >>= 1;
	}
	len -= 1;

	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}
