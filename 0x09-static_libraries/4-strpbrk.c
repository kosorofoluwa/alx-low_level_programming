#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: string that is to be searched.
 * @accept: bytes to be searched
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * otherwise, NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
				return (s);
		}

		s++;
	}

	return ('\0');
}
