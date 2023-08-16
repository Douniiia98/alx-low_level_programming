#include "main.h"
/**
 * print_alphabet - prints all the lowercase alphabets.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch += 1;
	}
	_putchar('\n');
}
