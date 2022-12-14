#include "main.h"
/**
 * print_sign -prints sign and return
 * 1 if number is graeter than 0,
 * 0 if number is 0 and
 * -1 if number less than 0
 *
 *  @n: input number
 *  Return: 1 or 0 or -1, for positive, 0, negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
