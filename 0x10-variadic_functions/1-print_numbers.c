#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -print nums seperated by sep
 * @separator: the seperator
 * @n: number of args
 * @...: variable args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n == 0)
		return;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		i++;
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
