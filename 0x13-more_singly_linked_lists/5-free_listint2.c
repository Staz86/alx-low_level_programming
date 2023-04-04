#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: double pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	{
		return;
	}

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
