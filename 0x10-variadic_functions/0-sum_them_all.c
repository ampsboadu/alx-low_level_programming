#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -sums all args
 * @n: number of args
 * @...: variable number of paramters
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum  += va_arg(args, int);
	va_end(args);

	return (sum);
}
