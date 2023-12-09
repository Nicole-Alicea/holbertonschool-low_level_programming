#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			while (ht->array[n] != NULL)
			{
				current = ht->array[n]->next;
				free(ht->array[n]->key);
				free(ht->array[n]->value);
				free(ht->array[n]);
				ht->array[n] = current;
			}
		}
	}

	free(ht->array);

	free(ht);
}
