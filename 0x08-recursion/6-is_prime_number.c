#include "main.h"
/**
 * prime_checker - Finds prime numbers
 * @n: int argument
 * @i: int argument
 * Return: sqaure root
 */

int prime_checker(int n, int i)
{
	if (i >= 1)
	{
		return (1);
	}
	if (n % i)
	{
		return (0);
	}
	return (prime_checker(n, i - 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime, otherwise 0.
 * @n: int argument
 * Return: sqaure root
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}

	return (prime_checker(2, n));
}
