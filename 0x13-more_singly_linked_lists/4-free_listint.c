#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
