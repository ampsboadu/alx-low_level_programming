#include "main.h"

/**
 * _isdigit -checks if input is digit
 * @c: input to be checked
 * Return: 1 for digit 0 for others
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
