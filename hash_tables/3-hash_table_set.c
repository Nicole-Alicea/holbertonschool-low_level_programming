#include "hash_tables.h"

unsigned int hash_function(const char *key);
hash_node_t *create_node(const char *key, const char *value);

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
	unsigned int index = hash_function(key);

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	new_node = create_node(key, value);

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
