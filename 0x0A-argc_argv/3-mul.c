#include <stdio.h>

/**
 * _atoi - a function that converts a string to int.
 *
 * @s: string to be converted to int.
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
 * main - program that multiplies two numbers.
 *
 * @argc: no. of command-line arguments.
 * @argv: array of strings contains the argument values.
 *
 * Return: if success, returns 0.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		printf("%i\n", _atoi(argv[1]) * _atoi(argv[2]));

	}
	return (0);
}
