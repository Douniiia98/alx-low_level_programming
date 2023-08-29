#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be searched.
 * @needle: string containing the characters to search.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, i2;

	while (haystack[i])
	{
		for (j = 0, i2 = i; needle[j]; j++, i2++)
		{
			if (haystack[i2] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
		i++;
	}
	return (NULL);
}
