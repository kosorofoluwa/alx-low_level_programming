#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of element of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
