#include "main.h"
/**
 * _abs - computes the absolute value of an int
 *
 * @c: Number to check
 *
 * Return: c (success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
