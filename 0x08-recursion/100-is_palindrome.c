#include "main.h"
#include <stdio.h>

/**
 * lenOfStr -  a function that finds length of string.
 *
 * @s: a string.
 *
 * Return: length of s.
 *
 */
int lenOfStr(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + lenOfStr(s + 1));
}

/**
 * checkPalindrome - finds if a string is a palindrome.
 *
 * @s: string.
 * @string2: string.
 * @len: string length.
 *
 * Return: 1 if string is palindrome and 0 if not.
 *
 */

int checkPalindrome(char *s, int len, char *string2)
{
	if (len <= 0)
	{
		return (1);
	}

	if (*s != *(string2 + len - 1))
	{
		return (0);
	}

	return (checkPalindrome(s + 1, len - 1, string2));
}

/**
 * is_palindrome -returns 1 if string is palindrome, 0 if not.
 *
 * @s: string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (checkPalindrome(s, lenOfStr(s), s));
}
