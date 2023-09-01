#include "main.h"

/**
 * PN - finds if a number is prime or not.
 *
 * @n: integer number.
 * @x: value "n - 1"
 * Return: 1 if n is a prime number,
 * otherwise returns 0.
 */

int PN(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}

	if (n % x != 0)
	{
		return (PN(n, x - 1));
	}
	return (0);
}


/**
 * is_prime_number -  a function checks prime numbers.
 * @n: integer.
 *
 * Return: 1 if input integer a prime number,
 * otherwise 0.
 *
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (PN(n, n - 1));
}

