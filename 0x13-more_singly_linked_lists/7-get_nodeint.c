#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the desired node, or NULL if the node is not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) {
	listint_t *current = head;
	unsigned int i = 0;
	
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}

	return (NULL);
}

