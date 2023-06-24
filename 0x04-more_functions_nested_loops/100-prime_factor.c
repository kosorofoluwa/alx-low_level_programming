#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 Always
 */
int main(void)
{
	long int num, factor;

	num = 612852475143;

	for (factor = 3; factor <= sqrt(num); factor += 2)
	{
		while (num % factor == 0)
		{
			num /= factor;
		}
	}
	printf("%ld\n", num);

	return (0);
}
