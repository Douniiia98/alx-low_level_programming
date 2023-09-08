#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string a.
 * @s2: string b.
 * @n: number of letters used
 *
 * Return: The returned pointer shall point to new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i = 0, j = 0, l = 0, l2 = 0, s3;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[l2])
		l2++;

	if (n >= l2)
	{
		s3 = l + l2 + 1;
	}
	else
	{
		s3 = l + n + 1;
	}
	x = malloc(sizeof(char) * s3);
	if (x == NULL)
		return (NULL);

	while (i < l)
	{
		x[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l + n))
		x[i++] = s2[j++];

	while (n >= l2 && i < (l + l2))
		x[i++] = s2[j++];

	x[i] = '\0';

	return (x);
}
