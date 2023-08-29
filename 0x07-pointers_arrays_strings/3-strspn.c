#include "main.h"
#include <stdio.h>
/**
 * _strspn - a function that gets the length of substring.
 * @s: string to be searched.
 * @accept: string containing the characters to match.
 * Return: the number of characters in the initial
 * segment of s which consist only of characters from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, len = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (len);
}
