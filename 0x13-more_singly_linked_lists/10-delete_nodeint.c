#include "lists.h"

/**
* delete_nodeint_at_index - Deletes a node at a given index in a linked list.
* @head: A pointer to the head of the list.
* @index: The index of the node to delete.
* Return: If the function succeeds - returns 1.
*         If the function fails or the index is invalid - returns -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
