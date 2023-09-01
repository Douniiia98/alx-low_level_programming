#include <stdio.h>
/**
 * main - program prints the number of arguments passed to it.
 *
 * @argc: no. of command-line arguments.
 * @argv: array of strings contains the argument values.
 *
 * Return: if success, returns 0.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
