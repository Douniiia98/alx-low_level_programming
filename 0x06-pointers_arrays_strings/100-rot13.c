#include "main.h"
#include <stdio.h>

/**
 * rot13 - function encodes string using rot
 * @s: string
 * Return: pointer to string
 */

char *rot13(char *s)
{
	int i = 0, j;

	char xrot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char xrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (s[i] != '\0')
	{
		for (j = 0; xrot[j] != '\0'; j++)
		{
			if (s[i] == xrot[j])
			{
				s[i] = xrot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
