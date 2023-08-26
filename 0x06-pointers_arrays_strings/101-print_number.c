#include "main.h"
#include <stdio.h>

/**
 * print_number - function prints integer
 * @n: a number to be printed
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
