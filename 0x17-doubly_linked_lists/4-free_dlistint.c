#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees the memory allocated for a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
