#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to string.
 *
 * @str: string to be copied.
 *
 * Return: NULL if str = NULL. or pointer to string.
 *
 */

char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + size) != '\0')
	{
		size++;
	}

	p = malloc(size + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		if (i == size)
		{
			*(p + i) = 0;
			return (p);
		}
		p[i] = str[i];
	}
	return (NULL);
}
