#include "lists.h"

/**
 * add_nodeint - Adds a new node with the given
 * integer to the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for the new node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	/* Check if memory allocation was successful*/
	if (!new_node)
	return (NULL);

	/* Set the value of the new node*/
	new_node->n = n;

	/* Set the next pointer of the new node to the current head*/
	new_node->next = *head;

	/* Update the head to point to the new node*/
	*head = new_node;

	/* Return the address of the new node*/
	return (new_node);
}
