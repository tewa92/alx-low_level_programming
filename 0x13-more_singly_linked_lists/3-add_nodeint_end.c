#include "lists.h"

/**
 * add_nodeint_end - Adds a new node with the given
 * integer to the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/* Allocate memory for the new node*/
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));

/* Check if memory allocation was successful*/
if (!new)
return (NULL);

/* Set the value of the new node */
new->n = n;

/* Set the next pointer of the new node to NULL as it will be the last node*/
new->next = NULL;

/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new;
return (new);
}

/* Traverse the list to find the last node */
while (temp->next)
temp = temp->next;

/* Connect the last node to the new node */
temp->next = new;

/* Return the address of the new node */
return (new);
}
