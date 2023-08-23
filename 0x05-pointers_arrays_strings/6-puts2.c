#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 *
 * @str: string passed by reference.
 *
 *
*/

void puts2(char *str)
{

	int count = 0, l;

	while (*(str + count) != '\0')
	{

		count++;
	}

	l = --count;

	for (count = 0; count <= l; count += 2)
	{
		_putchar(*(str + count));
	}
	_putchar('\n');
}
