#include "lists.h"

/**
 * print_listint - Prints the elements of a singly linked list
 * @h: A pointer to the head of the list
 *
 * Description: This function prints the integer elements of a singly linked
 * list, starting from the provided head node.
 *
 * Return: The number of nodes in the list (size_t).
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

		while (h)
		{
			printf("%d\n", h->n);
			num++;
			h = h->next;
		}

		return (num);
}
