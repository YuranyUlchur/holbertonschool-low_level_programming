#include "hash_tables.h"

/**
 *hash_table_delete - function that delete a hash table.
 * @ht: hash_table_t const
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *aux = NULL;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			aux = node;
			node = node->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
