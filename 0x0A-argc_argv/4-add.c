#include <stdio.h>

/**
 * _atoi - function converts a string to int.
 *
 * @s: string to convert into int.
 *
 * Return: integer value.
*/

int _atoi(char *s)
{
	int length = 0, number = 0, s_ = 1;

	while (s[length] != '\0')
	{
		if (s[length] == '-')
		{
			s_ = -1;
			length++;
		}

		number = (number * 10) + (s[length] - '0');
		length++;
	}

	return (s_ * number);
}

/**
 * isNumber - function that checks if a string is a number or not.
 *
 * @s: string to check.
 *
 * Return: returns 1 if s is number, otherwise 0.
*/

int isNumber(char s[])
{
	int length = 0;

	if (s[length] == '-')
	{
		length++;
	}

	while (s[length] != '\0')
	{
		if (s[length] > 57 || s[length] < 48)
		{
			return (0);
		}

		length++;
	}

	return (1);
}

/**
 * main - program that adds positive numbers.
 *
 * @argc: no. of command-line arguments.
 * @argv: array of strings contains the argument values.
 *
 * Return: if success, returns 0.
*/

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			if ((!(isNumber(argv[i]))))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + _atoi(argv[i]);
			i++;
		}
		printf("%i\n", sum);
	}
	return (0);
}
