#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array
 * of chars and initializes it with a specific char.
 * @c: intialization char.
 * @size: the size of array.
 *
 * Return: a pointer to the array or NULL
 * if size = 0 or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= size; x++)
	{
		if (x == size)
		{
			p[x] = 0;
			return (p);
		}

		p[x] = c;
	}

	return (NULL);
}
