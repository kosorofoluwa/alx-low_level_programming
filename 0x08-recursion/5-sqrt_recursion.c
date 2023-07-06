#include "main.h"

/**
 * operator - returns square root of a number.
 * @n: input number to be checked
 * @c: iterator
 * Return: square root
 */
int operator(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + operator(n, c + 1));
}
/**
 * _sqrt_recursion - returns th square root of a number.
 * @n: input numberto be checked
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (operator(n, 2));
}
