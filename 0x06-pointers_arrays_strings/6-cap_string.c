#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of string s.
 *
 * @s: capitalized string
 * Return: pointer to capitalized string.
 */

char *cap_string(char *s)
{
	int a = 0, b = 0;
	char c[] = {10, 46, 59, 44, 33, 63, 34, 40, 41, 123, 125, 32, 9};


	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			if (a == 0)
			{
				s[a] = s[a] - 32;
			}
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (s[a - 1] == c[b])
					{
						s[a] = s[a] - 32;
						break;
					}
				}
			}
		}
		a++;
	}
	return (s);
}
