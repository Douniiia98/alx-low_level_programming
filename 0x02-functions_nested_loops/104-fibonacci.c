#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	unsigned long Fn_l, Fn_r, F1_l = 0;
	unsigned long F2_l = 0, F1_r = 1, F2_r = 2;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i < 2)
		{
			Fn_l = 0;
			Fn_r = F1_r + (F1_r * i);
		}
		else
		{
			Fn_l = F1_l + F2_l;
			Fn_r = F1_r + F2_r;

			if (((Fn_r) / (1000000)) > 0)
			{
				Fn_l++;
				Fn_r = Fn_r % (1000000);
			}
			F1_l = F2_l;
			F1_r = F2_r;
			F2_l = Fn_l;
			F2_r = Fn_r;
		}
		if (Fn_l == 0)
		{
			printf("%lu", Fn_r);
		}
		else
		{
			printf("%lu%lu", Fn_l, Fn_r);
		}
		if ( i != 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
