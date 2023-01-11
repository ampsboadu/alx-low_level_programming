#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -allocate mem for 2D arrays
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
