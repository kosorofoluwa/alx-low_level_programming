#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: 0 always
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 9; num++)
		putchar('0' + (num % 10));
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
