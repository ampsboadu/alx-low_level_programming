#include "main.h"
/**
 * print_diagonal -print diagonal line
 * @n: determine lenght of line
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
