#include "main.h"
/**
 * swap_int - swaps values of two numbers.
 *
 * @a: 1st intger
 * @b: 2nd intger
 *
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
