#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function allocates memory using malloc.
 *
 * @b: size of allocated memmory.
 * Return: Returns a pointer to the allocated memory
 *
 * if malloc fails, the malloc_checked function
 * should cause  normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
