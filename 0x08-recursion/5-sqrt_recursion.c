#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be inputed
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (_recursion_com(n, 1));
}

/**
 * _recursion_com - calculates the square root
 * @n: number
 * @sr: square root
 *
 * Return: square root
 */
int _recursion_com(int n, int sr)
{
		if (sr * sr == n)
		{
			return (sr);
		}
		if (sr * sr > n)
		{
			return (-1);
		}
		return (_recursion_com(n, sr + 1));
}
