#include <stdlib.h>
#include "main.h"

/**
 * _calloc -reserve memory for array
 * @nmemb: array size
 * @size: size of byte
 * Return: pointer to reserved mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
