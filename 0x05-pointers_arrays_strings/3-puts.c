#include "main.h"
/**
 * _puts - a function that prints a string followed by a new line
 *
 * @str: printed string
 *
 *
*/

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
