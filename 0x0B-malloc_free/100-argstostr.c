#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments.
 *
 * @ac: arguments count.
 * @av: arguments vector.
 *
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, size = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}

	p = malloc(size + ac + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			p[k] = av[i][j];
			j++, k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
	}
