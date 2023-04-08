#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: pointer to hash table
 * @key: key of value to insert
 * @value: value to insert
 * Return: 1 on success or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *node = NULL;
	char *temp;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	temp = strdup(value);
	if (temp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = temp;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(temp);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = temp;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
