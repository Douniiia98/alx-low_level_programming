#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor of number 612852475143.
 *
 * Return: return 0.
*/

int main(void)
{
	long int i, j, k;

	j = 612852475143;
	k = -1;

	while (j % 2 == 0)
	{
		k = 2;
		j /= 2;
	}

	for (i = 3; i <= sqrt(j); i = i + 2)
	{
		while (j % i == 0)
		{
			k = i;
			j /= i;
		}
	}

	if (j > 2)
		k = j;

	printf("%ld\n", k);

	return (0);
}
