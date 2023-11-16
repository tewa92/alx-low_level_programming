#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
* add_node_end - Adds a new node at the end of a linked list
* @head: Pointer to the head of the linked list
* @str: String to be stored in the new node
* Return: Pointer to the newly added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last = *head;  /* Pointer to track the last node*/

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
new->next = NULL;

if (*head == NULL)
{
*head = new;  /* If the list is empty, set the new node as the head*/
}
else
{
while (last->next)
last = last->next;

last->next = new;  /*Append the new node to the end of the list*/
}

return (new);
}
