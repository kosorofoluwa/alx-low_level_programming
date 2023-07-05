#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if prime number,  0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	return (prime_number(n, 3));
}

/**
 * prime_number - checks if the input is a prime number
 * @n: number
 * @i: iterator
 *
 * Return: 1 if prime number, 0 otherwise
 */
int prime_number(int n, int i)
{
		if (i > n / 2)
		{
			return (1);
		}
		if (n % i == 0)
		{
			return (0);
		}
		return (prime_number(n, i + 2));
}
