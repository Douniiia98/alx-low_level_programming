#include <stdio.h>
/**
 * main - entry point of the program
 * Return: return 0 if success
 */
int main(void)
{
	int b;
	int a;

	for (b = 0; b < 100; b++)
	{
		for (a = 0; a < 100; a++)
		{
			if (b < a)
			{
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				putchar(' ');
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				if (b != 98 || a != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
