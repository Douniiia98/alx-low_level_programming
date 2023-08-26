#include "main.h"
#include <stdio.h>

/**
 * leet - encodes string into 1337 leet code.
 * @s: encoded string.
 * Return: pointer to string encoded.
 */
char *leet(char *s)
{
	int a = 0, b;

	char l[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a] != 0)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == l[b])
			{
				s[a] = l2[b];
			}
		}
		a++;
	}
	return (s);
}
