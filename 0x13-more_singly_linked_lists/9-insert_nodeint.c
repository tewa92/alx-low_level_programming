#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given
* index in a linked list.
* @head: A pointer to the head of the list.
* @idx: The index at which to insert the new node.
* @n: The value to store in the new node.
* Return: If the function fails - returns NULL.
*         Otherwise - returns a pointer to the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
}

	for (i = 0; temp && i < idx; i++)
{
	if (i == idx - 1)
{
	new->next = temp->next;
	temp->next = new;
	return (new);
}
	else
	temp = temp->next;
}

	return (NULL);
}
