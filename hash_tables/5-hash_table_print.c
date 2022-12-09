#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash_table_t const
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int aux = 0;
	char *k = "{", *comma = "";

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (ht->array[index]->key)
			{
				printf("%s", k);
				k = "";
				aux = 1;
				printf("%s'%s': '%s'", comma, ht->array[index]->key,
					   ht->array[index]->value);
				comma = ", ";
			}
		}
	}
	if (aux == 0)
	{
		printf("{}\n");
	}
	else
	{
		printf("}\n");
	}
}
