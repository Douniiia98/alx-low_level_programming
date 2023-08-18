#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,
 * followed by a new line.
 * for multiples of three print Fizz
 * for the multiples of five print Buzz.
 * For numbers multiples of both three and five print FizzBuzz.
 *
 * Return: always return 0.
*/

int main(void)
{
	int x;

	for (x = 1; x < 100 + 1; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		} else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		} else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (x == 1)
		{
			printf("%d", x);
		} else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
