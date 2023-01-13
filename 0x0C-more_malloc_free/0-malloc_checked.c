#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -allocates memory
 * @b: size of memory
 * Return: pointer to momery
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
