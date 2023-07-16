#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string of words
 *
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **ptr;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	ptr = malloc((height + 1) * sizeof(char *));
	if (ptr == NULL || height == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ptr[i] = malloc((c - k + 2) * sizeof(char));
				if (ptr[i] == NULL)
				{
					ch_free_grid(ptr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			ptr[i][j] = str[k];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
