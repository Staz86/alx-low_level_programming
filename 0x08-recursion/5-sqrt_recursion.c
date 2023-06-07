#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 *
 * Return: natural square root of n
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function for _sqrt_recursion
 * @n: input integer
 * @i: counter to test squares
 *
 * Return: natural square root of n
 * or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}
