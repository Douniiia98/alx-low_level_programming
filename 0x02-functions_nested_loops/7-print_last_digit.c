#include "main.h"
/**
 * print_last_digit - print the value of the last digit.
 *
 * @n: contains the argument value.
 *
 * Return: returns the last digit.
 */
int print_last_digit(int n)
{
	int lst_d;

	if (n >= 0)
	{
		lst_d = n % 10;
	}
	else
	{
		lst_d = -(n % 10);
	}
	_putchar(lst_d + '0');
	return (lst_d);
}
