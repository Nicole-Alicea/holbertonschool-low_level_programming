#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key and it cannot be an empty string
 * @value: The value associated with the key. It must be duplicated
 * and can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;
	unsigned long int index, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);

	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	for (n = index; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = value_copy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
