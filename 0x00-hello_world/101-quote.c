#include <unistd.h>

/**
 * main - prints the following string "with proper grammar, but the outcome is a piece of art,"
 * 
 * Return: one if working correctly
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
