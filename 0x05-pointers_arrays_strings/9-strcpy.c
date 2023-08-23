#include "main.h"
#include <stdio.h>
/**
 * _strcpy- copies the string pointed to by src
 * including the terminating null
 * to the buffer pointed to by dest
 *
 * @dest: buffer to copy to
 * @src: source string
 * Return: Return value the dest pointer
 *
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0, size;

	while (*(src + count) != '\0')
	{

		count++;
	}
	size = count;
	count = 0;

	while (count <= size)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
