#include "main.h"
/**
 * print_sign - checks the numbers sign.
 *
 * @n: the argument value.
 *
 * Return: 1 at positive , -1 at negative , 0 if n = 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
