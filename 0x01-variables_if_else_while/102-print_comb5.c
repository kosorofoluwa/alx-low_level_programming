#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');
			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));
			/* if (num1 != 98) */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
