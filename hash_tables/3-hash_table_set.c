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
	char *value_dup = malloc(strlen(value));

	if (!value_dup || !value)
	{
		return (0);
	}
	value_dup = strdup(value);

	if (!*ht->array || !key)
	{
		return (0);
	}

	while ((*ht->array)->key != key)
	{
		*ht->array = (*ht->array)->next;
	}

	(*ht->array)->value = value_dup;

	return (1);
}
