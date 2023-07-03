#include "main.h"

/**
 * _memcpy - Copies the memory area
 * @dest: points to memory
 * @src: int to be copied
 * @n: number of bytes
 *
 * Return: pointer to  @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;
	char *d = dest;
	char *s = src;

	for (num = 0; num < n; num++)
		d[index] = s[num];

	return (dest);
}
