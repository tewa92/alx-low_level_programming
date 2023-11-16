#include <stdio.h>
#include "lists.h"

/**
* list_len - Calculates the number of elements in a linked list
* @r: Pointer to the head of the linked list
* Return: Number of elements in the linked list
*/
size_t list_len(const list_t *r)
{
size_t b = 0;

while (r)
{
b++;
r = r->next;
}

return (b);
}
