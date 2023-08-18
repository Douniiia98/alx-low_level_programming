#include "main.h"

/**
 * print_triangle - draws a triangle.
 *
 * @size: size of tringle
 *
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size - 1; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
