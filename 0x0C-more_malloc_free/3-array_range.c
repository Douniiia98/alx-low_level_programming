#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function creates an array of integers.
 *
 * @min: minimum number.
 * @max: maximum number.
 *
 * The array created should contain all the values from min to max
 * Return: pointer to the newly created array
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, *x;

	if (min > max)
		return (NULL);

	x = malloc((max - min + 1) * sizeof(int));
	if (!x)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		x[i] = min + i;
	}

	return (x);
}
