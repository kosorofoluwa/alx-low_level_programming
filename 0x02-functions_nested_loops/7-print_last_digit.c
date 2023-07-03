#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @i: number
 *
 * Return: i
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	_putchar((i % 10) + 48);
	return (i % 10);
}
