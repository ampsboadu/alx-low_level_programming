#include "main.h"
/**
 * print_square -print square of #
 * @size: lenght of square
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
