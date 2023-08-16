#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int a = 0, b = 0, z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			z = a * b;

			if (z >= 10)
			{
				_putchar(((z / 10) % 10) + '0');
			}
			_putchar((z % 10) + '0');

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((a * (b + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}


}
