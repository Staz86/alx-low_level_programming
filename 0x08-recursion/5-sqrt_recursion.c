#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns natural square root
 * @n: base
 * Return: squaretoot or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(sqrt(n)));
	}
}
