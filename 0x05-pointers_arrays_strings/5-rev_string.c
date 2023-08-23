#include "main.h"
/**
 * rev_string - function that reverses a string.
 *
 * @s: string
 *
 *
*/

void rev_string(char *s)
{

	int count = 0, l, start_;
	char c;

	while (*(s + count) != '\0')
	{
		count++;
	}

	count--;
	l = count;
	if (count % 2 == 0)
	{
		(start_ = l / 2);
	}
	else
	{
		(start_ = (l / 2) + 1);
	}

	while (count >= start_)
	{
		c = *(s + count);
		*(s + count) = *(s + l - count);
		*(s + l - count) = c;
		count--;
	}
}
