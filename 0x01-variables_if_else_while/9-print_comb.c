#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: return 0 if success
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
