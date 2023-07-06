#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index starting from 0;
 * Return: value of the bit at index, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1 << index;

	return ((n & mask) ? 1 : 0);
}
