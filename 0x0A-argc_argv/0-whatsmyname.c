#include <stdio.h>
/**
 * main - program that prints its name.
 *
 * @argc: no. of command-line arguments.
 * @argv: array of strings contains the argument values.
 *
 * Return: if success, returns 0.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv[0]);
	return (0);
}
