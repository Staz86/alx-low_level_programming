#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of.
 *
 * Return: the natural square root of @n, -1 if @n doesn't have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	int i, result;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	i = 1;
	result = 1;

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
