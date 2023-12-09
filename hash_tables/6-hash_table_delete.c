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
	hash_node_t* current, next;

	if (ht == NULL)
	{
		return;
	}

	for (n = 0; n < ht->size; n++)
	{
		current = ht->array[n];
		next;

		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);

	free(ht);
}
