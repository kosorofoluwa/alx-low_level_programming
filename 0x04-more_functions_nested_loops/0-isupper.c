#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked
 *
 * Return: 1 if uppercase character, 0 otherwise
 */
int _isupper(int c)
{
	for (c = 65; c <= 90; c++)
	{
		if (c > 64 && c < 91)
		{
			return (1);
		}
	}
	return (0);
}
