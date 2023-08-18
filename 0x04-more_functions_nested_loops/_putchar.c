#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: character to be printed
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
