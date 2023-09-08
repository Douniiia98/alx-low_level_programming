#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 *
 *
 * @ptr: is a pointer to the memory
 * previously allocated with a
 * call to malloc: malloc(old_size).
 *
 * @old_size: is the size, in bytes,
 * of the allocated space for ptr.
 *
 * @new_size: is the new size,
 * in bytes of the new memory block.
 * Return: the pointer to the newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, size;
	char *x, *y = ptr;

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		size = old_size;
	else if (old_size > new_size)
		size = new_size;
	else
		return (ptr);

	x = malloc(new_size);
	if (!x)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(x + i) = *(y + i);
	}

	free(ptr);
	return (x);
}
