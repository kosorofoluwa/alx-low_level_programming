#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alpha, n;

	n = 0;

	while (n < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		n++;
		_putchar('\n');
	}
}
