#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line i the terminal
 * @n: number of times.
 *
 * Return: 0 Always
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
