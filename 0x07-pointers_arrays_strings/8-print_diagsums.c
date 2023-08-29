#include <stdio.h>
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of the two diagonals
 * of a square matrix of integers.
 * @size: size of array.
 * @a: 2D array.
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += *(a + ((i * size + j)));
			}
			if (i + j == size - 1)
			{
				diag2 += *(a + (i * size + j));
			}
		}
	}
	printf("%i, %i\n", diag1, diag2);
}
