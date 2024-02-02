#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table.
 * @h: The hash table to be deleted.
*/
void hash_table_delete(hash_table_t *h)
{
unsigned long int j;
hash_node_t *n;

if (h == NULL)
	return;

for (j = 0; j < h->size; j++)
{
	n = h->array[j];
	free_hash_list(n);
}
free(h->array);
free(h);
}


/**
 * free_hash_list - Free a linked list of hash_node_t nodes.
 * @head: The head of the linked list to be freed.
*/
void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
