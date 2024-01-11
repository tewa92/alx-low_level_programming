#include "lists.h"

/**
 * dlistint_len - Returns the length of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The length of the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t len = 0;

    while (h)
    {
        len += 1;
        h = h->next;
    }

    return (len);
}
