#include <stdlib.h>

/**
 * print_name -function pointer to print text
 * @name: parameter
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
