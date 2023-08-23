#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for program 101-crackme.
 * Return: 0
*/

int main(void)
{
	int s, car;

	srand(time(NULL));
	while (s <= 2645)
	{
		car = rand() % 128;
		putchar(car);
		s += car;
	}
	putchar(2772 - s);
	return (0);
}
