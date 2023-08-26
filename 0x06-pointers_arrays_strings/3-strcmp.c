#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings s1 & s2.
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0 if two strings are equal,
 * positive number if s1 > s2,
 * negative number if s2 > s1.
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (a + 1)
	{
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] == 0 || s1[a] == 0)
			break;

		a++;
	}

	return (0);
}
