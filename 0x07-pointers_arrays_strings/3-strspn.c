#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				i++;
				break;
			}

			else if (accept[num + 1] == '\0')
				return (i);
		}

		s++;
	}

	return (i);
}
