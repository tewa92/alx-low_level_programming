#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with a given key from the hash table.
 * @ht: The hash table to search.
 * @key: The key to look for.
 * Return: The value associated with the key if found, NULL if not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *node;
unsigned long int index;

if (ht == NULL)
	return (NULL);

index = key_index((const unsigned char *) key, ht->size);
node = ht->array[index];

while (node != NULL)
{
	if (strcmp(node->key, key) == 0)
		return (node->value);

	node = node->next;
}
return (NULL);
}
