#include "main.h"

/**
 * root -find root of nu compare to n
 * @n: number to check
 * @i: iteratable starting from 0
 * Return: root (n) or -1
 */

int root(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (root(n, i + 1));
}

/**
 * _sqrt_recursion -find square root of number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root(n, 0));
}
