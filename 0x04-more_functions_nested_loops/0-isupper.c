#include "main.h"

/**
 * _isupper -returns if char is upper
 * @c: character to be checked
 * Return: 1 for Uppercase, 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
