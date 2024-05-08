#include "search_algos.h"

/**
 * linear_skip - Utilizes linear skip to search for an element in a
 * sorted singly linked list of integers.
 * @list: A pointer to the head of the linked list to be searched.
 * @value: The value to search for.
 *
 * Return: Returns NULL if the value is not present or the head of the
 * list is NULL. Otherwise, returns a pointer to the first node where the
 * value is located.
 *
 * Description: This function prints a value each time it is compared in
 * the list during the linear skip process. It uses the square root of the
 * list size as the jump step.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
