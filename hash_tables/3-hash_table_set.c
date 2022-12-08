#include "hash_tables.h"

/**
 * hash_table_set- function that adds an element to the hash table.
 * @key: const char
 * @ht: hash_table_t
 * @value: const char
 * Return: unsigned long integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *value_dup, *key_dup;

	value_dup = strdup(value);
	key_dup = strdup(key);

	if (!value_dup || !value)
	{
		free(value_dup);
		return (0);
	}
	if (!ht)
	{
		return(0);
	}
	

	index = hash_djb2((const unsigned char *)key_dup) % (ht->size);
	node = malloc(sizeof(hash_node_t));

	node->key = key_dup;
	node->value = value_dup;
	node->next = NULL;

	if (ht->array[index])
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
