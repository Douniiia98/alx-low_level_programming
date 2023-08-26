#include "main.h"
#include <stdio.h>
/**
 * _strncat - function concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters will be concatenated from src
 * Return: pointer to string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dsl = 0;
	int srl = 0;

	while ((*(dest + dsl) != '\0'))
	{
		dsl++;
	}

	while (srl < n)
	{
		if (*(src + srl) == '\0')
			break;
		*(dest + dsl + srl) = *(src + srl);
		srl++;
	}
	*(dest + dsl + n) = '\0';

	return (dest);
}
