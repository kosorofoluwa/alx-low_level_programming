#include "main.h"

/**
 * prime -checks for a prime number.
 * @n: number to be checked
 * @i: iterator.
 * Return: 1 if n = prime number, 0 otherwise
 */
int prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, i + 1));
}
/**
 * is_prime_number - checks for a prime number
 * @n: number to be checked
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
