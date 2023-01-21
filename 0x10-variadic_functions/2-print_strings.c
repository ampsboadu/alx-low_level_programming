#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -print string args separated by sep
 * @separator: separator
 * @n: number of args
 * @...: variable args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	if (n == 0)
		return;

	va_start(args, n);
	while (i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		i++;
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
