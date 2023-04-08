#include "hash_tables.h"

/**
 * hash_table_print - print elements in hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	char *sep = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ((ht->array)[index]);
		while (node)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
