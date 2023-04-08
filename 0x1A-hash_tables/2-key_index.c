#include "hash_tables.h"

/**
 * key_index - retrive index of a key
 * @key: value to search index for
 * @size: size of hash table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	/* first check if size is 0 */
	if (size == 0)
		return (0);

	/* get index from hash func & mod with size */
	index = hash_djb2(key);
	return (index % size);
}
