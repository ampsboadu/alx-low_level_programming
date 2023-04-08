#include "hash_tables.h"

/**
 * hash_table_create -create hash table with size pass
 * @size: pass size
 * Return: pointer to hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* allocate memory for table node */
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	/* allocate memory for table */
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	/* assign values in table to NULL */
	for (i = 0; i < size; i++)
		array[i] = NULL;

	ht->size = size;
	ht->array = array;

	return (ht);
}
