#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer.
 * @s: pointer to string s.
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int count = 0, i = 1, j = 0;
	unsigned int n = 0;

	while (s[count] != 0)
	{
		if (s[count] == 45)
		{
			i *= -1;
		}

		while (s[count] >= '0' && s[count] <= '9')
		{
			j = 1;
			n = (n * 10) + (s[count] - '0');
			count++;
		}

		if (j == 1)
		{
			break;
		}

		count++;
	}

	n = n * i;
	return (n);
}
