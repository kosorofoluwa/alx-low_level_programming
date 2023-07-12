#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the dimension
 * @height: height of the dimension
 *
 * Return: a pointer to a dimensional arrays of integer
 */
int **alloc_grid(int width, int height)
{
int **ptr = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (!ptr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
