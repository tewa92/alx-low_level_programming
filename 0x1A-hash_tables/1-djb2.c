/**
 * hash_djb2 - Implement the djb2 algorithm for generating hash
 *	values from strings.
 * @str: String used as input to generate the hash value.
 * Return: The generated hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
