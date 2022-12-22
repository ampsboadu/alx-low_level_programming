#include "main.h"

/**
 * reverse_array -reverse array
 * @a: integer array
 * @n: array size;
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	n = n - 1;

	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		n--;
		i++;
	}
}
