#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 always
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + (i % 10));
			putchar('0' + (j % 10));

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
