#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @i: integer
 *
 * Return: i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
