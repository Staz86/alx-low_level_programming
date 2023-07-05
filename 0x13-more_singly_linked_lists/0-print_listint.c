#include "lists.h"
#include <stddef.h>
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to header node in listint_t struct
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
