#include "main.h"
#include <stdio.h>

/**
 * erase_zero - deletes left zeros of a string.
 * @size: the string size.
 * @r: string.
 * Return: poniter to string r.
 */

char *erase_zero(int size, char *r)
{
	int i = 0, x;

		while (i < size)
	{
		if (r[i] != '0')
		{
			x = i;
			break;
		}
		i++;
	}
	for (i = 0; i <= size; i++)
	{
		r[i] = r[i + x];
	}
	return (r);
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @size_r: the buffer size.
 * @r: result string.
 * Return: poniter to string if size_r is suitable for the result length.
 * or return 0 if size_r less than the result length.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, a3 = size_r;
	int m_1 = 1, m_2 = 1, dg1, dg2, cry = 0, num_ = 0;

	while (n1[a1] != '\0')
		a1++;
	while (n2[a2] != '\0')
		a2++;
	if (a1 + 1 >= a3 || a2 + 1 >= a3)
		return (0);
	r[a3] = '\0';
	a3--;
	a1--;
	a2--;
	while (a3 >= 0)
	{
		dg1 = ((n1[a1] - '0') * m_1);
		dg2 = ((n2[a2] - '0') * m_2);
		num_ = dg1 + dg2 + cry + '0';
		if (num_ > '9')
		{
			num_ = num_ - 10;
			cry = 1;
		}
		else
			cry = 0;
		r[a3] = num_;
		a3--;
		if (a1 <= 0)
			m_1 = 0;
		else
			a1--;
		if (a2 <= 0)
			m_2 = 0;
		else
			a2--;
	}
	return (erase_zero(size_r, r));
}
