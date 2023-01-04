#include "main.h"

/**
 * print_diagsums -print sum of array dig
 * @a: 2D array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;
	int j;

	for (j = 0; j < size; j++)
	{
		i = (j * size) + j;
		sum1 += a[i];
	}

	for (j = 1; j <= size; j++)
	{
		i = (j * size) - j;
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
