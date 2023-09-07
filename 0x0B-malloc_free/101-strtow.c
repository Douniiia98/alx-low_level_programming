#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wrd_count(char *str);

/**
 * strtow - a function that splits a string into word.
 * @str: the string to be splitted.
 * Return: The function returns a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i = 0, j = 0;
	int word = 0, let = 0, a = 0, b = 0, c;
	char **ar;

	word = wrd_count(str);
	if (str == NULL || *str == 0 || !word)
	{
		return (NULL);
	}

	ar = malloc((word + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < word; i++)
	{
		let = 0;
		while (str[j])
		{
			if (str[j] != ' ')
			{
				let++;
			}
			if (str[j] == ' ' && let > 0)
			{
				break;
			}
			j++;
		}
		ar[i] = malloc((let * sizeof(char)) + 1);
		if (ar[i] == NULL)
		{
			free(ar);
			for (a = 0; a <= i; a++)
				free(ar[a]);
			return (NULL);
		}

		for (a = b, c = 0; a < j; a++)
		{
			if (str[a] != ' ')
			{
				ar[i][c] = str[a];
				c++;
			}
		}
		ar[i][c] = 0;
		b = j;
	}
	ar[i] = NULL;
	return (ar);
}

/**
 * wrd_count - counts words in string.
 * @str: string.
 *
 * Return: the number of words.
 */

int wrd_count(char *str)
{
	int w = 0, word = 0;

	while (str[w])
	{
		if ((str[w] == 32 && w && str[w - 1] != 32) || (!str[w + 1] && str[w] != 32))
		{
			word++;
		}
		w++;
	}
	return (word);
}
