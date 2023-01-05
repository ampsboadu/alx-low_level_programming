#include "main.h"

/**
 * _puts_recursion -prints string
 * @c: string to print
 */

void _puts_recursion(char *s)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
