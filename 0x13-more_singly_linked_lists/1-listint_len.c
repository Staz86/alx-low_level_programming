#include "lists.h"
/**
 * listint_len - returns number of elements in a struct list
 *@h: pointer to the struct header
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *num_elements = h;
	size_t count = 0;

	while (num_elements != NULL)
	{
		num_elements = num_elements->next;
		count++;
	}
	return (count);
}
