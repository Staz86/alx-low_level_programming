#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0, decval = 1;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		total += (b[i] - '0') * decval;
			decval *= 2;
	}
	return (total);
}
