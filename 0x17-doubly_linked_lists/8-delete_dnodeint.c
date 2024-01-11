#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at specified index in doubly linked
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: -1 if deletion fails, otherwise 0.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start;
	unsigned int i;
	unsigned int len;
	len = len_node(&head);

	start = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		start = start->next;
		free(*head);
		*head = start;
		if (start != NULL)
			start->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		start = start->next;
		if (!start)
			return (-1);
	}
	if (len - 1 == index)
	{
		start->prev->next = NULL;
		free(start);
		return (1);
	}
	start->prev->next = start->next;
	start->next->prev = start->prev;
	free(start);
	return (1);
}
