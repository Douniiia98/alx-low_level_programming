#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings src & dest.
 * @dest: destination str.
 * @src: source str.
 * Return: Returns a pointer to resulting string > dest.
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while ((*(dest + a) != 0))
	{
		a++;
	}

	while (*(src + b) != 0)
	{
		*(dest + a + b) = *(src + b);
		b++;
	}
	*(dest + a + b) = *(src + b);

	return (dest);
}
