#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		_putchar('#');
		for (b = 2; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
