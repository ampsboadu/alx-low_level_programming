#include "main.h"

/**
 * main -print name of program
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char *s = __FILE__;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
