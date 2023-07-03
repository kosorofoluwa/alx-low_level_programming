#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_sign - Prints the sign of a number, determines what sign to print
 * @n: integer
 *
 * Return: 0 if int is zero, 1 if greater than 0
 * and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
