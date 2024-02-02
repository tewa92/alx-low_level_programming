#include "hash_tables.h"
/**
 * hash_table_set - Add an element to the hash table.
 * @h: The hash table to which the element will be added.
 * @k: The key of the element to add. The key cannot be an empty string.
 * @v: The value associated with the key. The value must be duplicated.
 *	It can be an empty string.
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *h, const char *k, const char *v)
{

hash_node_t *node;
hash_node_t *new_node;
unsigned long int index;

if (h == NULL || *k == '\n' || *v == '\n')
	return (0);

index = key_index((const unsigned char *)k, h->size);
node = h->array[index];

if (node == NULL)
{
	new_node = create_new_node(k, v);
	if (new_node == NULL)
		return (0);

	h->array[index] = new_node;
	return (1);
}

/*If key exists, replace it's value*/
while (node != NULL)
{
	if (strcmp(k, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(v);
		return (1);
	}
	node = node->next;
}
/*If key doesn't exist, create new node*/
new_node = create_new_node(k, v);
if (new_node == NULL)
	return (0);

new_node->next = h->array[index];
h->array[index] = new_node;
return (1);
}

/**
 * create_new_node - Create a new node with the specified key and value.
 * @k: The key for the new node. Cannot be an empty string.
 * @v: The value associated with the key. Must be duplicated
 *	Can be an empty string.
 * Return: 1 on success, 0 on failure.
*/

hash_node_t *create_new_node (const char *k, const char *v)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(k);
	new_node->value = strdup(v);
	new_node->next = NULL;

	return (new_node);
}

