#include "variadic_functions.h"

/**
 * sum_them_all -sums all args
 * @n: number of args
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum  += va_arg(args, int);
	va_end(args);

	return (sum);
}
