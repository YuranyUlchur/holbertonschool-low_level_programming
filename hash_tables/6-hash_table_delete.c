#include "hash_tables.h"

/**
 *hash_table_delete - function that delete a hash table.
 * @ht: hash_table_t const
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *node, *aux;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			node = aux;
			aux = aux->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}