#include <stdlib.h>
#include"main.h"

/**
 * _realloc -reallocates memory
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}

	return (p);
}
