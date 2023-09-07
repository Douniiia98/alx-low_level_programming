#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function concatenates two strings
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to strings.
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1 = 0, l2 = 0;
	char *p;

	if (s1 != NULL)
	{
		for (l1 = 0; s1[l1] != 0; l1++)
		;
	}

	if (s2 != NULL)
	{
		for (l2 = 0; s2[l2] != 0; l2++)
		;
	}

	p = malloc(l1 + l2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < l2; j++)
	{
		p[i + j] = s2[j];
	}
	p[l1 + l2] = '\0';
	return (p);
}
