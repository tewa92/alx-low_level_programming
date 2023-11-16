#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a linked list
* @head: Pointer to the head of the linked list
* @str: String to be stored in the new node
* Return: Pointer to the newly added node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}

new->len = len;
new->next = *head;
*head = new;

return (*head);
}
