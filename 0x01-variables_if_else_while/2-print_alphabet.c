#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the C program
 * Return: return 0 when success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
