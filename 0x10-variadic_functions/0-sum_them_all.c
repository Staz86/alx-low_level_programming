#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of variable arguments
 * @n: argument placeholder
 * @...: list of variable arguments
 * Return: sum (success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
