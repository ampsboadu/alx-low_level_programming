#include "hash_tables.h"

/**
 * hash_table_get - get element from hash table
 * @ht: pointer to hash table
 * @key: key to element to be retrieved
 * Return: element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	/* find index of key in hash table */
	index = key_index((const unsigned char *)key, ht->size);

	/* loop throug linked list to search key */
	temp = (ht->array)[index];
	while (temp != NULL && strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (!temp)
		return (NULL);
	else
		return (temp->value);
}
