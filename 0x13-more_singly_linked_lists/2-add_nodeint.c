#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: double pointer to the head node of the list
 * @n: integer argument
 * Return: Address of the new element (success),
 * NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
