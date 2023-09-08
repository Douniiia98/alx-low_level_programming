#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function allocates memory for array using malloc.
 *
 * @size: size
 * @nmemb: elements
 *
 * Return: pointer to new memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (!size || !nmemb)
		return (NULL);

	x = malloc(size * nmemb);
	if (!x)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		x[i] = 0;
	return (x);
}
