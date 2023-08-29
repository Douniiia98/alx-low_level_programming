#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @n: number of bytes of the memory area pointed to by s to be filled.
 * @b: charachter to be filled with.
 * Return: a pointer to the memory area s.
 * @s: pointer to the s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
