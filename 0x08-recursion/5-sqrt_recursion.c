#include "main.h"

/**
 * rt_sqr - returns the natural root rt_sqr of an integer number.
 *
 * @n: integer.
 * @m: m * m = n.
 * Return: returns sqrt of a number
 *
 */
int rt_sqr(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m < n)
	{
		return (rt_sqr(n, m + 1));
	}

	return (-1);

}

/**
 * _sqrt_recursion - finds natural square root.
 *
 * @n: number.
 *
 * Return: returns the natural square root of a number
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (rt_sqr(n, 0));
}
