#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the elements of a list
 * @h: points to the address of the head node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_num++;
		h = h->next;
	}
	return (node_num);
}
