#include "main.h"

/**
 * _memset - Fills the memory with constant bytes
 * @s: A pointer to the memory
 * @b: The character to fill the memory
 * @n: The number of bytes
 *
 * Return: A pointer to the memory @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;
	char *mem = s, val = b;

	for (num = 0; num < n; num++)
		mem[num] = val;

	return (mem);
}
