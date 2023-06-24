#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the numbers 1-100
 * 3 multiples print Fizz
 * 5 multiples print Buzz
 * 3 & 5 print FizzBuzz
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
