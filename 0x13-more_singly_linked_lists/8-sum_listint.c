#include "lists.h"

/**
* sum_listint - Calculates the sum of all the values in a linked list.
* @head: A pointer to the head of the list.
* Return: The sum of all values in the list.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

	while (temp)
		{
		sum += temp->n;
		temp = temp->next;
		}

	return (sum);
}
