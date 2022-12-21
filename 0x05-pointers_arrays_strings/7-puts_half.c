#include "main.h"
#include <string.h>

/**
 * puts_half -prints only ending half
 * @str: string to print
 */

void puts_half(char *str)
{
	int half;
	int length_of_the_string = strlen(str);

	if (length_of_the_string % 2 == 0)
		half = length_of_the_string / 2;
	else
		half = (length_of_the_string - 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
