#include "hash_tables.h"
/**
 * key_index - Return the index of a given key within the hash table array.
 * @k: The key to find the index for.
 * @s: The size of the hash table array.
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *k, unsigned long int s)
{
	unsigned long int index = hash_djb2(k) % s;

	return (index);
}
