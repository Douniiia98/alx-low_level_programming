#include <stdio.h>

/**
 * main - prints first 50 Fibonacci
 * Return: 0 at success
 */

int main(void)
{
	long f0 = 1, f1 = 2, f_sum, sum;
	int i;

	for (i = 0; ; i++)
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
			if (f_sum > 4000000)
			{
				break;
			}
		}

		if ((f_sum % 2) == 0)
		{
			sum += f_sum;
		}

	}
	printf("%ld\n", sum);
	return (0);
}
