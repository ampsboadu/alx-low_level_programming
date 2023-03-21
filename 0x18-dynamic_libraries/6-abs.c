#include "main.h"
/**
 * _abs -returns absolute interger value of number
 * @n: input number
 * Return: absolute number
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
