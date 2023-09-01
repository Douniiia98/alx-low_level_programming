#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: no. of command-line arguments.
 * @argv: array of strings contains the argument values.
 *
 * Return: if success, returns 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}
