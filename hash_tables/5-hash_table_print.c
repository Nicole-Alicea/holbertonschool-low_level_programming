#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 * @ht: Pointer to the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{\n");

	for (n = 0; n < ht->size; n++)
	{
		node = ht->array[n];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);

			node = node->next;

			if (node != NULL)
			{
				printf(", ");
			}
		}
		if (n < ht->size - 1)
		{
			printf("\n");
		}
	}
	printf("\n}\n");
}
