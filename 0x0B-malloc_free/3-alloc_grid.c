#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns a pointer to 2-D array of integers.
 *
 * @width: array's width.
 * @height: array's height.
 *
 * Return: returns a pointer to 2-D array of integers
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		p[x] = malloc(width * sizeof(int));
		if (p[x] == NULL)
		{
			free(p);
			for (y = 0; y <= x; y++)
				free(p[y]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			p[x][y] = 0;
		}
	}
	return (p);
}
