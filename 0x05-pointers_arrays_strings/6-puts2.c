#include "main.h"

/**
 * puts2 -prints %2
 * @str: array
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
