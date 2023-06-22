#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
