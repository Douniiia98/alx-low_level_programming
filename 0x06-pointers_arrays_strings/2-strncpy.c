#include "main.h"

/**
 *_strncpy - function copies string to another one
 * @src: source string
 * @dest: destination string
 * @n: number of copied elements
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; (i < n && src[i]); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	dest[i] = 0;
	}
	return (dest);

}
