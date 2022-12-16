#include "main.h"
/**
 * more_numbers -print numbers 10x from 1 to 14
 */

void more_numbers(void)
{
	int count;
	char i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
