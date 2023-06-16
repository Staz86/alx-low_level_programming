#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum included int
 * @max: max included int
 * Return: Pointer (success): NULL (failure)
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
