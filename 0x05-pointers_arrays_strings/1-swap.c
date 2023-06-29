#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b : second integer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int new = *a;

	*a = *b;
	*b = new;
}
