#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints the elements of a linked list
* @g: Pointer to the head of the linked list
* Return: Size of the linked list
*/
size_t print_list(const list_t *g)
{
size_t u = 0;

while (g)
{
if (!g->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", g->len, g->str);

g = g->next;
u++;
}

return (u);
}
