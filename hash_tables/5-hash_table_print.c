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
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (n = 0; n < ht->size; n++)
	{
		temp = ht->array[n];

		while (temp != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				flag = 1;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
