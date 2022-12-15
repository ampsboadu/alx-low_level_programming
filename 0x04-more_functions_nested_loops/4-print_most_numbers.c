#include "main.h"
/**
 * print_most_numbers -print numbers excluding 2 & 4
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' || i != '4')
		{
			_putchar(i);
		}
		i++;
	}

	_putchar('\n');
}
