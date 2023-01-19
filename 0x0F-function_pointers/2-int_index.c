#include <stddef.h>
#include "function_header.h"

/**
 * int_index -Search int in array using func ptr
 * @array: array
 * @size: size of array
 * @cmp: ptr to comapare func
 * Return: index of int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);
}
