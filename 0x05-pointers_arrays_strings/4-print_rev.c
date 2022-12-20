#include "main.h"
#include <stdio.h>

/**
 * print_rev -prints string reverse
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
