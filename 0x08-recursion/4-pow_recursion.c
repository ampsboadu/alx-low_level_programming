#include "main.h"

/**
 * _pow_recursion -return x power y
 * @x: number
 * @y: power
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);

	if (y == 0)
		return (0);

	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
