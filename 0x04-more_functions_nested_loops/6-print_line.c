#include "main.h"
/**
 * print_line -draws line
 * @n: lenght of the line
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
