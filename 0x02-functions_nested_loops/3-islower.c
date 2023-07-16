#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: integer to be checked
 *
 * Return: 1 if uppercase,0 otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
