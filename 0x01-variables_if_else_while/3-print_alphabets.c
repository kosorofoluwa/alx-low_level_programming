#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0 always
 */
int main(void)
{
	char i, j;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
