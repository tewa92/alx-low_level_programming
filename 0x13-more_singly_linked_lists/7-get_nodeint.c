#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
	temp = temp->next;
	i++;
	}

	return (temp ? temp : NULL);
}
