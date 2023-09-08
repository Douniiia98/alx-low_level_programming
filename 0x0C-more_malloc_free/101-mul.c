#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long int atoi_(char *s);
int _strlen(char *s);
int numBer(char s[]);

/**
 * main -a program multiplies two numbers.
 * @argv: arguments vector.
 * @argc: arguments counter.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int *a, len, len2, len3, i, d1 = 0, d2 = 0, c, f = 0;
	char *s = argv[1], *s2 = argv[2];

	if (argc != 3 || (!(numBer(s) && numBer(s2))))
	{
		printf("Error\n");
		exit(98);
	}

	len = _strlen(s);
	len2 = _strlen(s2);

	len3 = len + len2;
	a = malloc(sizeof(int) * len3);
	if (!a)
		return (1);
	for (i = 0; i < len + len2; i++)
		a[i] = 0;
	for (len = len; len > 0; len--)
	{
		d1 = s[len - 1] - 48;
		c = 0;
		for (len2 = _strlen(s2); len2 > 0; len2--)
		{
			d2 = s2[len2 - 1] - 48;
			c += a[len + len2 - 1] + (d1 * d2);
			a[len + len2 - 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			a[len + len2] += c;
	}
	for (i = 0; i < len3; i++)
	{
		if (a[i])
			f = 1;
		if (f)
			_putchar(a[i] + 48);
	}
	if (!f)
		_putchar(48);
	_putchar('\n');
	free(a);
	return (0);
}

/**
 * atoi_ - converts a string to ul int.
 *
 * @s: string to converted to ul int.
 *
 * Return: integer int.
*/

unsigned long int atoi_(char *s)
{
	int length = 0, sig = 1;
	unsigned long int num = 0;

	while (s[length] != '\0')
	{
		if (s[length] == '-')
		{
			sig = -1;
			length++;
		}

		num = (num * 10) + (s[length] - '0');
		length++;
	}

	return (sig * num);
}

/**
 * numBer - a function that checks if a string is a number.
 *
 * @s: string to be checked.
 *
 * Return: 1 if number, otherwise 0.
*/

int numBer(char s[])
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] > 57 || s[length] < 48)
		{
			return (0);
		}

		length++;
	}

	return (1);
}

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string passed by reference.
 *
 * Return: returns the length of the string.
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
