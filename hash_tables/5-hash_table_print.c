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
	hash_node_t *temp;
	int need_coma = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{\n");

	for (n = 0; n < ht->size; n++)
	{
		temp = ht->array[n];

		while (temp != NULL)
		{
			if (need_coma)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;

			need_coma = 1;
		}
	}
	printf("\n}\n");
}
