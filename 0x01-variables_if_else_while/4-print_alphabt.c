#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except q and e
 *
 * Return: 0 always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	if ((c != 'q') && (c != 'e'))
		putchar(c);
	putchar('\n');
	return (0);
}
