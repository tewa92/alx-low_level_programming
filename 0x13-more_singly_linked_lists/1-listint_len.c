#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0; /* Initialize the counter for the number of nodes*/

	while (h) /* Iterate through the linked list until the end (NULL) is reached*/
	{
	num++; /* Increment the counter for each node*/
	h = h->next; /* Move to the next node*/
	}

	return (num); /* Return the total number of nodes in the linked list*/
}
