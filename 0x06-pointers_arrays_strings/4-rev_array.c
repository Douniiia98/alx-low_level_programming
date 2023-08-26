#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses array of int.
 * @a: array
 * @n: number of array elements
*/

void reverse_array(int *a, int n)
{
	int y = 0, x;

	if (n >= 2)
	{
		while (y <= (n / 2))
		{
			x = a[y];
			a[y] = a[n - 1 - y];
			a[n - 1 - y] = x;
			y++;
		}
	}
}
