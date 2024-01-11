#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * create_dnode - Creates a new node with given data, previous, and next links.
 * @n: Data of the node.
 * @prev: Pointer to the previous node.
 * @next: Pointer to the next node.
 * Return: Pointer to the newly created node.
 */

dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}

/**
 * insert_dnodeint_at_index - Inserts a new node with given data at a specified position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index for the insertion of the new node.
 * @n: Data for the new node.
 * Return: Address of the new node or NULL if an error occurs.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL);
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL))
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count < idx) && (curr == NULL))
		return (NULL);
	if (localPrev != NULL)
	{       
		localPrev->next = create_dnode(n, localPrev, curr);
		curr->prev = localPrev->next;
		return (localPrev->next);
	}
	return (NULL);
}
