#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lower-case letters to upper-case.
 * @s: string
 * Return: returns a pointer to string s
*/

char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		(s[a] >= 'a' && s[a] <= 'z') ? (s[a] -= 32) : (s[a] += 0);
		a++;
	}
	return (s);
}
