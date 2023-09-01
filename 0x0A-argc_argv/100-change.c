#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the minimum number
 *
 * @argc: no. of command-line arguments.
 * @argv: array of strings contains the argument values.
 *
 * Return: if success, returns 0.
*/

int main(int argc, char *argv[])
{
	int nOfCoins = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
		printf("0\n");
	else
	{
		if (x / 25)
		{
			nOfCoins += (x / 25);
			x %= 25;
		}
		if (x / 10)
		{
			nOfCoins += (x / 10);
			x %= 10;
		}
		if (x / 5)
		{
			nOfCoins += (x / 5);
			x %= 5;
		}
		if (x / 2)
		{
			nOfCoins += (x / 2);
			x %= 2;
		}
		if (x / 1)
		{
			nOfCoins += (x / 1);
			x %= (1);
		}
		printf("%i\n", nOfCoins);
	}
	return (0);
}
