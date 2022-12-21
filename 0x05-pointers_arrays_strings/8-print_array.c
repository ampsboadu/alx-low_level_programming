#include "main.h"
#include <stdio.h>
/**
 * print_array -prints items in array
 * @a: array
 * @n: number of items in a
 * Return: destination
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);

		i++;
	}
	printf("\n");
}
