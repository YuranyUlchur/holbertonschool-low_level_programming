#include "hash_tables.h"

/**
 * hash_table_get- function that retrieves a value associated with a key.
 * @key: const char
 * @ht: hash_table_t const
 * Return: char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht)
		return (NULL);
	if (!key || !*key)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % (ht->size);
	while (ht->array[index])
	{
		if (!strcmp(key, ht->array[index]->key))
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
