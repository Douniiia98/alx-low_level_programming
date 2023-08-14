#include <stdio.h>
/**
 * main - entry point of the program
 * Return: return 0 if success
 */
int main(void)
{
	int i;
	int j;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{
				for (l = 0; l <= 9; l++)
				{
					if (l > j)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(l + '0');
					if (!(i == 7 && j == 8 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
