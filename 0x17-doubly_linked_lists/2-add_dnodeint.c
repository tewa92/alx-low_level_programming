#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Inserts a new element at the beginning
 * @head: Pointer to the head of the list.
 * @n: Value of the new element.
 * Return: Pointer to the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
