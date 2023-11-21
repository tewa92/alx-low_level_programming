#include "lists.h"

/**
* pop_listint - Removes the head node of a linked list and returns its data.
* @head: A pointer to the head of the list.
* Return: The data of the removed head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

return (num);
}
