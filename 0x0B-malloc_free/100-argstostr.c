#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments in a program
 * @ac: first perimeter
 * @av: second parameter
 *
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, k = 0, char_count = 0;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			char_count++;
		}
	}
	ptr = malloc(sizeof(char) * (char_count + ac + 1));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);
}
