#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves node from doubly linked list by its index.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired element.
 * Return: The element at the specified index or NULL if not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
