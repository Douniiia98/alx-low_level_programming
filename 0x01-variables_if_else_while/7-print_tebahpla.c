#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: return 0 if success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
