#include "main.h"

/**
 * _isupper - check if a character is uppercase alpabet
 * @c: char contains the character value
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
