#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string.
 *
*/

void puts_half(char *str)
{
	int count = 0, l = 0;

	while (*(str + count) != '\0')
	{

		count++;
	}

	l = --count;

	for (count = (l / 2) + 1; count <= l; count++)
	{
		_putchar(*(str + count));
	}
	_putchar('\n');
}
