#include "lists.h"
/**
 * find_listint_loop - Finds the start of a loop in a linked list (if exists).
 * @head: A pointer to the head of the list.
 * Return: The pointer to the start of the loop, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
	return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
			slow = slow->next;
			fast = fast->next;
			}
		return (fast);
		}
	}

return (NULL);
}
