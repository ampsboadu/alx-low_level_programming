#include "hash_table.h"

/**
 * hash_table_t -create hash table with size pass
 * @size: pass size
 * Return: pointer to hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* allocate memory for table node */
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		retrun (NULL);

	/* allocate memory for table */
	table = malloc(sizeof(*table) * size);
	if (!table)
	{
		free(ht);
		return (NULL);
	}

	/* assign values in table to NULL */
	for (i = 0; i < size; i++)
		table[i] = NULL;

	ht->size = size;
	ht->table = table;

	return (ht);
}
