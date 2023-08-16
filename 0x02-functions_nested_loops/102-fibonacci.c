#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci
 * Return: 0 if success
 */

int main(void)
{
	long f0 = 1, f1 = 2, f_sum;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			f_sum = f0;
		}
		else if (i == 1)
		{
			f_sum = f1;
		}
		else
		{
			f_sum = f1 + f0;
			f0 = f1;
			f1 = f_sum;
		}

		printf("%ld", f_sum);

		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
