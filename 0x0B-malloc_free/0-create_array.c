#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of memory to print
 * @c: char argument
 * Return: *ptr (success) or NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
